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

Node* findMiddle(Node* head){

    if(head==nullptr || head->next==nullptr){
        return head;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast!=nullptr && fast->next!=nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;

}

int main()
{
 return 0;
}