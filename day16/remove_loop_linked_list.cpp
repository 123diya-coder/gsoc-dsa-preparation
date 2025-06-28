#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// Detect loop using Floyd's Cycle Detection
bool detectLoop(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return true;
    }
    return false;
}

// Find and remove the loop
void removeLoop(Node* head) {
    Node* slow = head;
    Node* fast = head;

    // Detect loop
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            break;
    }

    if (slow != fast)
        return;

    // If loop starts at head
    if (slow == head) {
        while (fast->next != head) {
            fast = fast->next;
        }
        fast->next = nullptr;
        return;
    }

    // Otherwise
    slow = head;
    while (slow->next != fast->next) {
        slow = slow->next;
        fast = fast->next;
    }

    fast->next = nullptr;
}

// Print linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Create list: 1->2->3->4->5->3 (loop)
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    // Creating a loop
    head->next->next->next->next->next = head->next->next; // loop at node 3

    if (detectLoop(head)) {
        cout << "Loop detected. Removing loop..." << endl;
        removeLoop(head);
    } else {
        cout << "No loop detected." << endl;
    }

    cout << "Linked List after removing loop: ";
    printList(head);

    return 0;
}
