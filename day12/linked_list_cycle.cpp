#include <iostream>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int data) {
        val = data;
        next = nullptr;
    }
};

// Function to detect cycle using Floyd's Cycle Detection Algorithm
bool hasCycle(ListNode* head) {
    if (!head || !head->next) return false;

    ListNode* slow = head;
    ListNode* fast = head;

    while (fast && fast->next) {
        slow = slow->next;          // 1 step
        fast = fast->next->next;    // 2 steps

        if (slow == fast) return true;
    }

    return false;
}

int main() {
    // Creating a linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    // Creating a cycle: connect node 5 to node 2
    head->next->next->next->next->next = head->next;  // 5 → 2 (cycle)

    // Check for cycle
    if (hasCycle(head))
        cout << "Cycle detected in linked list ✅" << endl;
    else
        cout << "No cycle in linked list ❌" << endl;

    return 0;
}
