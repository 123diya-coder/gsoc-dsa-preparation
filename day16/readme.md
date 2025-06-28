# Day 16 - Detect and Remove Loop in Linked List

## 🚀 Problem Statement:
You are given a singly linked list which may contain a loop. Your task is to:
- Detect the loop in the list.
- Remove the loop without losing any nodes.

## ✅ Concepts Used:
- Floyd’s Cycle Detection Algorithm (Tortoise and Hare)
- Linked List traversal
- Pointer manipulation

## 🧠 Steps:
1. Use slow and fast pointers to detect a loop.
2. Once detected, reset one pointer to head.
3. Move both one step at a time until their next pointers meet. That’s the end of the loop.
4. Break the loop by pointing the last node’s `next` to `nullptr`.

## 💻 Language:
C++

## 🗃️ File:
- `remove_loop_linked_list.cpp`

## 📌 Status:
✅ Completed
