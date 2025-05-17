#include <iostream>
#include <stack>
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

int main() {
    stack<int> st;

    Node* n1 = new Node(10);
    Node* n2 = new Node(20);

    n1->next = n2;

    Node* temp = n1;

    
    while (temp != nullptr) {
        st.push(temp->data);
        temp = temp->next;
    }

    
    cout << "Reversed: ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}


