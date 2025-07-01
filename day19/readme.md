# Day 19: Rotate Array

## 📌 Problem
Given an array, rotate the array to the right by k steps.

## ✅ Approach
- Reverse the whole array
- Reverse the first k elements
- Reverse the remaining n-k elements

## 📊 Complexity
- Time: O(n)
- Space: O(1)

## 📥 Example
### Input:
nums = [1,2,3,4,5,6,7], k = 3  
### Output:
[5,6,7,1,2,3,4]
