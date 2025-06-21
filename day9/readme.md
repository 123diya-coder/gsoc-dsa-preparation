# Day 9: Search Insert Position

## Problem:
Given a sorted array and a target value, return the index if the target is found.  
If not, return the index where it would be if it were inserted in order.

### Example:
- Input: nums = [1,3,5,6], target = 5  
  Output: 2
- Input: nums = [1,3,5,6], target = 2  
  Output: 1

## Approach:
- Used **Binary Search** for optimized solution (O(log n))
- Checked if `mid` is equal, greater or smaller than target
- Returned `low` as insert position when not found

## Language: C++
