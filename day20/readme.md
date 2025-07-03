# Day 20: Merge Two Sorted Lists

## 📌 Problem
Merge two sorted linked lists and return it as a new sorted list.

## ✅ Approach
- Use a dummy node and compare list1 and list2
- Append the smaller node to the result
- Continue until one list is exhausted, then append the rest

## 📊 Complexity
- Time: O(n + m)
- Space: O(1)

## 📥 Example
### Input:
list1 = [1,2,4], list2 = [1,3,4]

### Output:
[1,1,2,3,4,4]
