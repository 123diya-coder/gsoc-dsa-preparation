# Day 15: Merge Two Sorted Linked Lists

## 🧠 Problem Statement

Given two sorted linked lists, merge them into a single sorted linked list. The new list should be created by splicing together the nodes of the original two lists.

### Example:
Input:
List 1: 1 → 2 → 4
List 2: 1 → 3 → 4

Output:
1 → 1 → 2 → 3 → 4 → 4


---

## 💡 Approach

- Use a **dummy node** to simplify the logic of merging.
- Compare the values of the current nodes from both lists.
- Append the smaller node to the result and move the pointer forward.
- Once one list is exhausted, append the rest of the other list.
- Return the merged list starting from `dummy.next`.

---

## 💻 Code (C++)

```cpp
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode dummy(0);
    ListNode* tail = &dummy;

    while (list1 && list2) {
        if (list1->val < list2->val) {
            tail->next = list1;
            list1 = list1->next;
        } else {
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }

    tail->next = list1 ? list1 : list2;

    return dummy.next;
}

📊 Time & Space Complexity
Time Complexity: O(n + m), where n and m are the lengths of the two lists.

Space Complexity: O(1) – no extra space used.