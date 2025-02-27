#include <stdio.h>
#include<malloc.h>

typedef struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}node;

node* createNode(int data){
    node* new;
    new=(node*)malloc(sizeof(node));
    new->data=data;
    new->left=NULL;
    new->right=NULL;
    return new;
}

void inOrder(node* root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
    }
}

void preOrder(node* root){
    if(root !=NULL){
        printf("%d ",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(node* root){
    if(root !=NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ",root->data);
    }
}

int isBST(node* root){
    static node* prev=NULL;
    if(root!=NULL){
        if(!isBST(root->left)){
            return 0;
        }
        if(prev!=NULL && root->data <= prev->data){
            return 0;
        } 
        prev=root;
        return isBST(root->right);
    }
    else 
    return 1;
}

node* search(node* root, int item){
    node* ptr=root;
    while(ptr!=NULL){
        if(item < ptr->data)
            ptr=ptr->left;
        else if(item >ptr->data)
            ptr=ptr->right;
        else if(item==ptr->data)
            return ptr;
    }
    return NULL;
}

int main(){
    node *p = createNode(5);
    node *p1 = createNode(3);
    node *p2 = createNode(6);
    node *p3 = createNode(1);
    node *p4 = createNode(4);

    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;

    node *new = search(p,4);
    if(new!=NULL)
        printf("Found %d", new->data);
    else
        printf("Element not found");
    return 0;
}