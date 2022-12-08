#include<iostream>
#include<algorithm>

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

int height(Node* root){
    if(root==NULL){
        return 0;
    }
    return 1+max(height(root->left), height(root->right));
}

int main(){
    Node *root = new Node(10);
    root->left = new Node(7);
    root->right = new Node(16);
    root->right->left = new Node(15);
    root->right->left->right = new Node(20);

    cout<<height(root);
    return 0;
}