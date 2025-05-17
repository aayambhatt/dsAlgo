#include <iostream>
using namespace std;

struct Node {
public:
	int data;
	Node* next;

	Node(int val) {
		data = val;
		next=nullptr;
	}

};

Node* reverseList(Node* head) {
    Node* temp = head;
    Node* prev = nullptr;
    
    while(temp!=nullptr){
        Node* front = temp->next;
        temp->next = prev;
        prev = temp;
        temp=front;
    }
    
    return prev;

}

void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


int main()
{
    
    Node* n1 = new Node(10);
    Node* n2 = new Node(20);
    Node* n3 = new Node(30);
    Node* n4 = new Node(40);
     
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
     
   Node* reversedHead = reverseList(n1);
    printList(reversedHead);
    
	return 0;
}