#include<iostream>
using namespace std;

struct Node{
public: 
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }


};

Node* reverseRecursive(Node* head) {
    
    //base case
    if(head==nullptr || head->next==nullptr){
        return head;
    }
    
    //reverse the rest of the list
    Node* newHead = reverseRecursive(head->next);
    
    // put current node at the end
    head->next->next=head;
    head->next=nullptr;
    
    return newHead;
    
}

int main()
{
 return 0;
}