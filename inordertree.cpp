#include<iostream>

using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int x){
        data = x;
        left=right=NULL;
    }
};

void inorder(Node *root){
    if(root== NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(Node *root){
    if(root!=NULL){
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(Node *root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}

int main(){
    Node *root = new Node(10);
    root->left = new Node(8);
    root->right = new Node(15);
    // root->left->left = new Node(5);
    // root->left->right = new Node(9);
    // root->right->left = new Node(14);
    // root->right->right = new Node(20);
    // root->right->right->left = new Node(18);
    inorder(root);
    cout<<'\n';
    preorder(root);
    cout<<'\n';
    postorder(root);
    return 0;
}