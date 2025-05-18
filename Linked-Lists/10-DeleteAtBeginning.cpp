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


Node* deleteAtBeginning(Node* head) {
	if(head==nullptr) {
		return nullptr;
	}
	if(head->next==nullptr) {
		delete head;
		return nullptr;
	}

	Node* newHead = head->next;
	delete head;

	return newHead;

}


int main()
{
 return 0;
}