# Floyd’s Cycle Detection in Linked List 🚴‍♂️

This repository contains a simple C++ implementation of **Floyd’s Cycle Detection Algorithm** (also known as the **Tortoise and Hare Algorithm**) to detect a loop in a singly linked list.

## 💡 What is Floyd's Cycle Detection?

Floyd's algorithm is a pointer algorithm that uses two pointers moving at different speeds to detect a cycle in a sequence of values or nodes.

- **Slow pointer** moves 1 step at a time.
- **Fast pointer** moves 2 steps at a time.
- If there's a cycle, both pointers will eventually meet at some point.

## 📂 Files Included

- `main.cpp` – Complete working C++ code with example linked list
- `README.md` – This documentation

## 📌 Sample Output

Cycle detected in linked list ✅

shell
Copy
Edit

## 🔁 Example Cycle Created

Linked List:

1 -> 2 -> 3 -> 4 -> 5
^ |
|--------|


In this example, the last node (`5`) is connected back to node `2`, forming a cycle.

## ⚙️ How to Run

```bash
g++ main.cpp -o linkedlist
./linkedlist

🧠 Time & Space Complexity
Time Complexity: O(n)

Space Complexity: O(1)