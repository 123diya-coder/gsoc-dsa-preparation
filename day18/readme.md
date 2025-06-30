# Day 18: Detect and Remove Loop in Linked List

## 🔍 Problem
Detect and remove a loop in a linked list using Floyd’s Cycle Detection Algorithm.

## ✅ Approach
- Use two pointers (slow and fast).
- If they meet, a loop exists.
- To remove the loop, reset one pointer to head and move both until their `next` pointers are the same.

## 💡 Example
### Input:
1 → 2 → 3 → 4  
     ↑       ↓  
     ←←←←←←←←←  

### Output:
1 → 2 → 3 → 4

## 🧠 Key Concepts
- Floyd’s Cycle Detection
- Loop removal in linked list
