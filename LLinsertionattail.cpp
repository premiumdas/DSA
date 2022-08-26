#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printll(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<'\n';
}

void insertAtTail(Node* &head, int d){
    Node* temp = new Node(d);
    Node* tail = head;
    while(tail -> next!= NULL){
        tail = tail -> next;
    }
    tail-> next = temp;
    tail = temp;
}

void insertAtPos(Node* &head, int pos, int d){
    Node* temp = head;
    int count = 1;
    Node* temp1 = new Node(d);
    if(pos==1){
        temp1 -> next = head;
        head = temp1;
    }
    else{
        while(count != pos-1){
            temp = temp -> next;
            count++;
        }
        temp1 -> next = temp -> next;
        temp -> next = temp1;
    }
}

void deleteAtPos(Node* &head, int pos){
    Node* temp = head;
    int count = 1;
    if(pos==1){
        head = head -> next;
    }
    else{
        while(count != pos-1){
            temp = temp -> next;
            count++;
        }
    }
}

int main(){
    Node* head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    printll(head);
    insertAtTail(head, 40);
    printll(head);
    insertAtTail(head,100);
    printll(head);
    insertAtPos(head,2,99);
    printll(head);
    insertAtPos(head,7,111);
    printll(head);
    return 0;
}