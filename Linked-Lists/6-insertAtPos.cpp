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

Node* insertAtPosition(Node* head, int val, int pos){
    
    // creating a new node that is to be inserted
    Node* newNode = new Node(val);

    //edge case
    if(pos==0){
        newNode->next = head;
        return newNode;
    }

    Node* temp = head;
    int currPos = 0;
    // Traverse to node before the desired position
    while(temp!=nullptr && currPos<pos-1){
        temp = temp->next;
        currPos++;

    }

    //insertion 
    newNode->next = temp->next;
    temp->next = newNode;

    return head;



}


int main()
{
 return 0;
}