import os
import subprocess
import requests
from bs4 import BeautifulSoup
from datetime import datetime

print("=== UVa Auto Pusher ===\n")

problem_number = input("Enter Problem Number: ").strip()

# Language selection
print("\nSelect Language:")
print("  1. C++")
print("  2. C")
print("  3. Java")
print("  4. Python")
lang_choice = input("Enter choice (1/2/3/4): ").strip()

lang_map = {
    "1": ("C++", "cpp"),
    "2": ("C", "c"),
    "3": ("Java", "java"),
    "4": ("Python", "py")
}
language, ext = lang_map.get(lang_choice, ("C++", "cpp"))
print(f"✅ Language: {language}")

# Auto-fetch problem name & description from UVa
print("\n🔍 Fetching problem info from UVa...")
try:
    url = f"https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem={problem_number}"
    res = requests.get(url, timeout=10)
    soup = BeautifulSoup(res.text, "html.parser")

    title_tag = soup.find("h3")
    problem_name = title_tag.text.strip() if title_tag else f"Problem-{problem_number}"

    prob_div = soup.find("div", class_="problem-text")
    if prob_div:
        first_p = prob_div.find("p")
        description = first_p.text.strip()[:300] if first_p else "No description found."
    else:
        description = "No description found."

    print(f"✅ Found: {problem_name}")
    print(f"📝 Description preview: {description[:100]}...")

except Exception as e:
    print(f"⚠️ Could not fetch from UVa: {e}")
    problem_name = input("Enter problem name manually: ").strip()
    description = input("Enter short description manually: ").strip()

# Logic explanation
print("\n💡 Explain your logic/approach (e.g. used BFS, greedy, DP...):")
logic = input("Logic: ").strip()

# Code explanation
print("\n📖 Briefly explain your code (e.g. what key steps/functions do):")
code_explanation = input("Code Explanation: ").strip()

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
    f.write(f"## Problem Description\n{description}\n\n")
    f.write(f"## Logic / Approach\n{logic}\n\n")
    f.write(f"## Code Explanation\n{code_explanation}\n\n")
    f.write(f"## Solution\nSee `solution.{ext}`\n")

# Git push
subprocess.run(["git", "add", "."])
subprocess.run(["git", "commit", "-m", f"Add UVa {problem_number} - {problem_name}"])
subprocess.run(["git", "push", "-u", "origin", "main"])

print(f"\n✅ Done! Pushed: {folder}/")