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


int main()
{
    Node* n1 = new Node(10);
    Node* n2 = new Node(20);

    n1->next = n2;

    Node* temp = n1;

    while(temp!=nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }


 return 0;
}