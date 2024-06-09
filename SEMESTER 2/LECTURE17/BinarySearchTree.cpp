#include <iostream>
using namespace std;

typedef struct node {
    int value;
    struct node *left;
    struct node *right;
}NODE;

NODE* newNode(int val) {
    struct node *temp = new struct node;
    temp->value = val;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void insert(NODE *&root, int item) {
    NODE*ptr = root;
    NODE*ptr1 = NULL; 
    bool flag = false;

    while (ptr != NULL && !flag) {
        if (item < ptr->value) { 
            ptr1 = ptr;
            ptr = ptr->left;
        } else if (item > ptr->value) { 
            ptr1 = ptr;
            ptr = ptr->right;
        } else {
            flag = true;
            cout << "Item already exists." << endl;
            return;
        }
    }
    if (ptr == NULL) {
       NODE*newNode = new NODE;
        newNode->value = item; 
        newNode->left = NULL;
        newNode->right = NULL;

        if (ptr1 == NULL) {
            root = newNode;
        } else if (ptr1->value < item) {
            ptr1->right = newNode;
        } else {
            ptr1->left = newNode;
        }
    }
}

void inorderTraversal(NODE *root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        cout << root->value << " ";
        inorderTraversal(root->right);
    }
}

void preorderTraversal(NODE *root) {
    if (root != NULL) {
        cout << root->value << " ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

void postorderTraversal(NODE *root) {
    if (root != NULL) {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout << root->value << " ";
    }
}

int main() {
    NODE *root = NULL; 
    insert(root, 5);
    insert(root, 3);
    insert(root, 7);
    insert(root, 2);
    insert(root, 4);
    insert(root, 6);
    insert(root, 8);
    insert(root, 5); 
    cout << "In-order traversal of the BST: ";
    inorderTraversal(root);
    cout << endl;

    cout << "Pre-order traversal of the BST: ";
    preorderTraversal(root);
    cout << endl;

    cout << "Post-order traversal of the BST: ";
    postorderTraversal(root);
    cout << endl;
    }
    /*Output:
                Item already exists.
                In-order traversal of the BST: 2 3 4 5 6 7 8
                Pre-order traversal of the BST: 5 3 2 4 7 6 8
                Post-order traversal of the BST: 2 4 3 6 8 7 5 */
