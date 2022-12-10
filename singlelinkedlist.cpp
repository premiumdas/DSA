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

int main(){
    Node* head = new Node(4);
    head -> next = new Node(5);
    cout<<head->next->data;
    return 0;
}