#include<iostream>

using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int x){
        data = x;
        left=right=NULL;
    }
};

void knode(Node* root, int k){
    if(root==NULL){
        return;
    }
    if(k==0){
        cout<<root->data<<endl;
    }
    knode(root->left, k-1);
    knode(root->right, k-1);
}

int main(){
    Node* root = new Node(30);
    root->left = new Node(10);
    root->right = new Node(50);
    root->left->right = new Node(13);

    knode(root, 2);
    
    return 0;
}