import os
import subprocess
import requests
from datetime import datetime

print("=== UVa Auto Pusher ===\n")

problem_number = input("Enter Problem Number: ").strip()
problem_link = input("Enter Problem Link: ").strip()

print("\nSelect Language:")
print("  1. C++")
print("  2. C")
print("  3. Java")
print("  4. Python")
language = input("Enter choice (1/2/3/4): ").strip()

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
        problem_name = input("⚠️ Not found. Enter problem name manually: ").strip()
except Exception as e:
    print(f"⚠️ Could not fetch: {e}")
    problem_name = input("Enter problem name manually: ").strip()

# Paste solution
print("\nPaste your accepted solution below.")
print("When done, type END on a new line and press Enter:\n")
lines = []
while True:
    line = input()
    if line.strip() == "END":
        break
    lines.append(line)
code = "\n".join(lines)

# Create folder & files
safe_name = problem_name.replace(" ", "-").replace("/", "-")
folder = f"{problem_number}-{safe_name}"
os.makedirs(folder, exist_ok=True)

with open(f"{folder}/solution.{ext}", "w", encoding="utf-8") as f:
    f.write(code)

with open(f"{folder}/README.md", "w", encoding="utf-8") as f:
    f.write(f"# UVa {problem_number} - {problem_name}\n\n")
    f.write(f"**Language:** {language}  \n")
    f.write(f"**Date Solved:** {datetime.now().strftime('%Y-%m-%d')}  \n\n")
    f.write(f"**Problem Link:** {problem_link}  \n\n")
    f.write(f"## Solution\nSee `solution.{ext}`\n")

# Git push
subprocess.run(["git", "add", "."])
subprocess.run(["git", "commit", "-m", f"Add UVa {problem_number} - {problem_name}"])
subprocess.run(["git", "push", "-u", "origin", "main"])

print(f"\n✅ Done! Pushed: {folder}/")