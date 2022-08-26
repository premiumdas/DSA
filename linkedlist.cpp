#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node (int x){
        data=x;
        next=NULL;
    }
};

int main(){
    node* head = new node(10);
    head -> next = new node(20);
    cout<<head -> data<<" "<<head -> next<<endl;
    cout<<head -> next -> data<<" "<<head -> next ->next<<endl;
    return 0;
}
