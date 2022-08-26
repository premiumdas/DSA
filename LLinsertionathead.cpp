#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

void LLtraverse(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<'\n';
}

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next=head;
    head = temp;
}

int main(){
    Node* head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    LLtraverse(head);
    insertAtHead(head, 90);
    LLtraverse(head);
    return 0;
}