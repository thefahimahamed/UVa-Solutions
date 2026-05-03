# UVa 100 - Login

**Language:** C  
**Date Solved:** 2026-05-03  

## Problem Description
No description found.

## Logic / Approach
The program is based on the Collatz Conjecture, which states that any number will eventually reach 1 if you repeatedly halve it (if even) or triple it and add one (if odd). The goal is to find which number in a given range $[i, j]$ takes the most steps to reach 1. The logic follows a "brute force" approach: it takes every single integer in the range, runs the sequence until it hits 1, counts the steps for each, and keeps track of the highest count found.

## Code Explanation
The code uses a function called check to perform the 3n + 1 math and return the step count. In main, it uses a while loop with scanf to handle multiple lines of input. Since the input $i$ can be larger than $j$, the code uses an if-else block to determine if it should increment or decrement through the range. Inside these loops, it calls the check function for every number, compares the result to a max variable, and updates max whenever a longer cycle is found. Finally, it prints the original $i$ and $j$ followed by the maximum cycle length.

## Solution
See `solution.c`
