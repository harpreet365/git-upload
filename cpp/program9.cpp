/*Detect a Loop in a Linked List*/

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

bool detectLoop(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) return true;
    }
    return false;
}

int main() {
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    
    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = head;  // Creating a loop for testing

    if (detectLoop(head)) 
        cout << "Loop detected" << endl;
    else 
        cout << "No loop detected" << endl;

    return 0;
}
