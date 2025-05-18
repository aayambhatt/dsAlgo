#include<iostream>
using namespace std;

struct Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

Node* deleteAtPosition(Node* head, int pos) {
    if (head == nullptr) return nullptr;

    // Special case: delete head
    if (pos == 0) {
        Node* newHead = head->next;
        delete head;
        return newHead;
    }

    Node* temp = head;
    int currPos = 0;

    // Traverse to node before the one to delete
    while (temp != nullptr && currPos < pos - 1) {
        temp = temp->next;
        currPos++;
    }

    // If position is invalid or next node is null
    if (temp == nullptr || temp->next == nullptr) {
        return head;
    }

    // Delete node at pos
    Node* nodeToDelete = temp->next;
    temp->next = temp->next->next;
    delete nodeToDelete;

    return head;
}


int main()
{
 return 0;
}