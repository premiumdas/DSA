#include <iostream>
using namespace std;

struct Node{
    int key;
    Node *left, *right;
    Node(int x){
        key = x;
        left=right=NULL;
    }
};

Node *insertbst(Node *root, int x){
    if(root = NULL){
        return new Node(x); 
    }
    if(root->key > x){
        root->left = insertbst(root->left, x);
    }

}