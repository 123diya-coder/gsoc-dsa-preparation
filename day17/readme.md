# Day 17: Middle of the Linked List

## 📌 Problem Statement
Given the head of a singly linked list, return the middle node.  
If there are two middle nodes, return the second one.

## 🧠 Approach
We use the **two-pointer technique**:
- `slow` pointer moves one step at a time.
- `fast` pointer moves two steps at a time.
When `fast` reaches the end, `slow` will be at the middle.

## ✅ Example
### Input:
`1 → 2 → 3 → 4 → 5`
### Output:
`3`

### Input:
`1 → 2 → 3 → 4 → 5 → 6`
### Output:
`4`

## 🛠️ Concepts Practiced
- Linked list traversal
- Two-pointer (slow and fast pointer) technique
