# Day 3: Valid Parentheses

**Problem:**  
Given a string containing just the characters `'('`, `')'`, `'{'`, `'}'`, `'['`, and `']'`, determine if the input string is valid.

A string is valid if:
- Open brackets are closed by the same type of brackets.
- Open brackets are closed in the correct order.

**Example:**
Input: s = "()[]{}"
Output: true

Input: s = "([)]"
Output: false


**Approach:**  
- Use a stack to track open brackets.
- On encountering a closing bracket, check if it matches the top of the stack.

**Time Complexity:** O(n)  
**Space Complexity:** O(n)

**Tags:** Stack, String, DSA, GSoC Prep

**Link:** [LeetCode - Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)
