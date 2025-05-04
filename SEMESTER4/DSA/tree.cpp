#include <iostream>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;
    node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

void preorder(node *root){
    if(root ==nullptr) 
    return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main(){
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    cout << "Preorder Traversal: ";
    preorder(root);
    cout << endl;
    return 0;
}