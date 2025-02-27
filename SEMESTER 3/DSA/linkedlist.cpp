#include<iostream>
using namespace std;
typedef struct Node
{
    int data;
    struct Node *next;
}node; 

node* start = NULL;

void create(){
    node *newnode,*ptr;
    int val;
    cout<<"Enter the value (press -1 to end)"<<endl;
    cin>>val;
    while(val!=-1){
    newnode=(node*)malloc(sizeof(node));
    newnode->data=val;
    
    if(start==NULL){
        newnode->next=NULL;
        start=newnode;
    }
    else{
        ptr=start;
        while(ptr->next != NULL){
            ptr=ptr->next;
        }
        ptr->next=newnode;
        newnode->next=NULL;
    }
    cout<<"Enter the value (press -1 to end)"<<endl;
    cin>>val;
}
}

void display(){
    node*ptr;
    ptr=start;
    if(start==NULL){
        cout<<"LinkedList is empty";
    }
    while(ptr!=NULL){
    cout<<ptr->data<<"->";
    ptr=ptr->next;
    }
    cout<<"NULL";
}

void sort() {
    if (start == NULL || start->next == NULL) {
        return; // No sorting needed for empty or single-node lists
    }

    node *ptr1, *ptr2;
    int temp;
    bool swapped;

    do {
        swapped = false;
        ptr1 = start;
        while (ptr1->next != NULL) {
            ptr2 = ptr1->next;
            if (ptr1->data > ptr2->data) { // Swap if out of order
                temp = ptr1->data;
                ptr1->data = ptr2->data;
                ptr2->data = temp;
                swapped = true;
            }
            ptr1 = ptr1->next;
        }
    } while (swapped); // Continue until no swaps occur
}

int main(){
    create();
     cout << "Before Sorting:" << endl;
    display();

    sort();
    cout << "\n After Sorting:" << endl;
    display();
    return 0;
}
// node* sort(node* start){
//     node* ptr1=NULL;
//     node* ptr=start;
//     while(ptr->next !=NULL )

// }

