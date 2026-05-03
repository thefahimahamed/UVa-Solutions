import os
import subprocess
import requests

print("=== UVa Auto Pusher ===\n")
print("💡 Type 'exit' at any step to cancel.\n")

def get_input(prompt):
    value = input(prompt).strip()
    if value.lower() == "exit":
        print("\n❌ Cancelled! Nothing was pushed.")
        exit()
    return value

problem_number = get_input("Enter Problem Number: ")
problem_link = get_input("Enter Problem Link: ")
date_solved = get_input("Enter Date Solved (e.g. 03 May 2026): ")

print("\nSelect Language:")
print("  1. C++")
print("  2. C")
print("  3. Java")
print("  4. Python")
print("  0. Cancel")
language = get_input("Enter choice (1/2/3/4): ")

lang_map = {
    "1": ("C++", "cpp"),
    "2": ("C", "c"),
    "3": ("Java", "java"),
    "4": ("Python", "py")
}
language, ext = lang_map.get(language, ("C++", "cpp"))
print(f"✅ Language: {language}")

# Auto-fetch problem name from uhunt API
print("\n🔍 Fetching problem name...")
problem_name = f"Problem-{problem_number}"

try:
    api_url = f"https://uhunt.onlinejudge.org/api/p/num/{problem_number}"
    res = requests.get(api_url, timeout=10)
    data = res.json()
    if data:
        problem_name = data.get("title", f"Problem-{problem_number}")
        print(f"✅ Found: {problem_name}")
    else:
        problem_name = get_input("⚠️ Not found. Enter problem name manually: ")
except Exception as e:
    print(f"⚠️ Could not fetch: {e}")
    problem_name = get_input("Enter problem name manually: ")

# Confirm before continuing
print(f"\n📋 Problem: {problem_number} - {problem_name}")
print(f"🌐 Link: {problem_link}")
print(f"📅 Date: {date_solved}")
print(f"💻 Language: {language}")
confirm = get_input("\nLooks good? Press Enter to continue or type 'exit' to cancel: ")

# Paste solution
print("\nPaste your accepted solution below.")
print("When done, type END on a new line and press Enter:\n")
lines = []
while True:
    line = input()
    if line.strip().lower() == "exit":
        print("\n❌ Cancelled! Nothing was pushed.")
        exit()
    if line.strip() == "END":
        break
    lines.append(line)
code = "\n".join(lines)

# Create folder & files
safe_name = "".join(c if c.isalnum() or c in "-_ " else "" for c in problem_name).strip().replace(" ", "-")
folder = f"{problem_number}-{safe_name}"
os.makedirs(folder, exist_ok=True)

# Write solution file
with open(f"{folder}/solution.{ext}", "w", encoding="utf-8") as f:
    f.write(code)

# Write README file
with open(f"{folder}/README.md", "w", encoding="utf-8") as f:
    f.write(f"# UVa {problem_number} - {problem_name}\n\n")
    f.write(f"**Language:** {language}  \n")
    f.write(f"**Date Solved:** {date_solved}  \n\n")
    f.write(f"**Problem Link:** {problem_link}  \n\n")
    f.write(f"## Solution\n")
    f.write(f"See `solution.{ext}`\n")

print(f"\n📁 Folder created: {folder}/")
print(f"📄 solution.{ext} ✅")
print(f"📄 README.md ✅")

# Git push
subprocess.run(["git", "add", "."])
subprocess.run(["git", "commit", "-m", f"Add UVa {problem_number} - {problem_name}"])

# Pull first to avoid conflicts
pull_result = subprocess.run(
    ["git", "pull", "origin", "main", "--no-edit", "--rebase"],
    capture_output=True, text=True
)
if pull_result.returncode != 0:
    subprocess.run(["git", "rebase", "--abort"])
    subprocess.run(["git", "pull", "origin", "main", "--no-edit"])

# Push
push_result = subprocess.run(
    ["git", "push", "-u", "origin", "main"],
    capture_output=True, text=True
)

if push_result.returncode == 0:
    print(f"\n✅ Done! Pushed: {folder}/")
else:
    print("\n⚠️ Push failed! Trying force push...")
    subprocess.run(["git", "push", "-u", "origin", "main", "--force-with-lease"])
    print(f"\n✅ Done! Pushed: {folder}/")