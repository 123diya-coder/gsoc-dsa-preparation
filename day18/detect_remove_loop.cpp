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

// Detect loop using Floyd's algorithm
bool detectLoop(Node* head) {
    Node *slow = head, *fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) return true;
    }
    return false;
}

// Remove loop from list
void removeLoop(Node* head) {
    Node *slow = head, *fast = head;

    // Step 1: Detect loop
    do {
        if (!fast || !fast->next) return;
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);

    // Step 2: Remove loop
    slow = head;
    if (slow == fast) {
        while (fast->next != slow) fast = fast->next;
    } else {
        while (slow->next != fast->next) {
            slow = slow->next;
            fast = fast->next;
        }
    }
    fast->next = nullptr;
}

// Print list
void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = head->next;  // Creating loop

    if (detectLoop(head)) {
        cout << "Loop detected. Removing..." << endl;
        removeLoop(head);
    }

    cout << "List after removing loop: ";
    printList(head);

    return 0;
}
