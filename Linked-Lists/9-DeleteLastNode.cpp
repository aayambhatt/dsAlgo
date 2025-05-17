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


Node* deleteLastNode(Node* head) {
    if (head == nullptr) return nullptr;

    if (head->next == nullptr) {
        delete head;
        return nullptr;
    }

    Node* temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = nullptr;

    return head;
}


int main()
{
 return 0;
}