#include <iostream>
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

void printReverse(Node* head) {
    if (head == nullptr) {
        return;
    }

    printReverse(head->next);
    cout << head->data << " ";
}

int main() {
    Node* n1 = new Node(10);
    Node* n2 = new Node(20);
    Node* n3 = new Node(30);

    // ✅ Link the nodes
    n1->next = n2;
    n2->next = n3;

    // ✅ Call recursive reverse print
    cout << "Reversed: ";
    printReverse(n1);

    return 0;
}
