## Day 10 - Longest Substring Without Repeating Characters

### Problem:
Given a string, find the length of the longest substring without repeating characters.

### Approach:
- Use the sliding window technique.
- Use a set to keep track of characters in the current window.
- Expand the right pointer, and if a character is already seen, move the left pointer.

### Time Complexity: O(n)
### Space Complexity: O(n)

### LeetCode Link:
https://leetcode.com/problems/longest-substring-without-repeating-characters/
