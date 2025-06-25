#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Function to get the length of a linked list
int getLength(ListNode* head) {
    int length = 0;
    while (head != nullptr) {
        length++;
        head = head->next;
    }
    return length;
}

ListNode* getIntersectionNode(ListNode *headA, ListNode *headB) {
    int lenA = getLength(headA);
    int lenB = getLength(headB);

    // Equalize starting point
    while (lenA > lenB) {
        headA = headA->next;
        lenA--;
    }
    while (lenB > lenA) {
        headB = headB->next;
        lenB--;
    }

    // Move both pointers together until they meet
    while (headA != nullptr && headB != nullptr) {
        if (headA == headB) return headA;
        headA = headA->next;
        headB = headB->next;
    }

    return nullptr;
}

// Example usage
int main() {
    // Creating intersected linked lists manually for example
    ListNode* common = new ListNode(8);
    common->next = new ListNode(10);

    ListNode* headA = new ListNode(3);
    headA->next = new ListNode(7);
    headA->next->next = common;

    ListNode* headB = new ListNode(99);
    headB->next = new ListNode(1);
    headB->next->next = common;

    ListNode* result = getIntersectionNode(headA, headB);
    if (result) {
        cout << "Intersection at node with value: " << result->val << endl;
    } else {
        cout << "No intersection found." << endl;
    }

    return 0;
}
