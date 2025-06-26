#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Function to reverse the linked list
ListNode* reverseList(ListNode* head) {
    ListNode* prev = NULL;
    ListNode* curr = head;

    while (curr != NULL) {
        ListNode* nextTemp = curr->next; // store next
        curr->next = prev;               // reverse current node's pointer
        prev = curr;                     // move prev and curr one step forward
        curr = nextTemp;
    }

    return prev;
}

// Function to print the list
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// Driver Code
int main() {
    // Creating linked list 1->2->3->4->5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    cout << "Original List: ";
    printList(head);

    head = reverseList(head);

    cout << "Reversed List: ";
    printList(head);

    return 0;
}

Input: 1 → 2 → 3 → 4 → 5 → NULL
Output: 5 → 4 → 3 → 2 → 1 → NUL


---

## 🚀 Approach

We use an **iterative approach** to reverse the linked list in-place.

### ✅ Steps:
1. Initialize `prev` as `NULL` and `curr` as `head`.
2. Loop through the list and:
   - Store the next node.
   - Reverse the `next` pointer of `curr`.
   - Move `prev` and `curr` forward.
3. Return `prev` (new head of reversed list).

---

## 💻 Code (C++)

```cpp
ListNode* reverseList(ListNode* head) {
    ListNode* prev = NULL;
    ListNode* curr = head;

    while (curr != NULL) {
        ListNode* nextTemp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextTemp;
    }

    return prev;
}

📊 Complexity
Time Complexity: O(n)

Space Complexity: O(1)

