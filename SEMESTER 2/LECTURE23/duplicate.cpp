// #include<iostream>
// using namespace std;
// typedef struct node
// {
//     int data;
//     struct node *next;
// }NODE;

// NODE* create(NODE *start)
// {
//     NODE *newnode, *ptr;
//     int num;
//     cout<<"Enter the data (-1 to end) : ";
//     cin>>num;
//     while (num != -1)
//     {
//         NODE* newnode=new NODE;
//         newnode->data = num;
//         if (start == NULL)
//         {
//             newnode->next = NULL;
//             start = newnode;
//         }
//         else
//         {
//             ptr = start;
//             while (ptr->next != NULL)
//             {
//                 ptr = ptr->next;
//             }
//             ptr->next = newnode;
//             newnode->next = NULL;
//         }
//        cout<<"\nEnter the data (-1 to end): ";
//         cin>>num;
//     }
//     return start;
// }

// NODE* display(NODE *start){
//     NODE *ptr;
//     ptr=start;
//     cout<<"Entered Linked List : "<<endl;
//     if(ptr==NULL){
//         cout<<"List is Empty"<<endl;
//         return start;
//     }
//     while(ptr!=NULL){
//        cout<<ptr->data<<"  ";
//         ptr=ptr->next;
//     }
//     cout<<endl;
//     return start;
// }
// NODE* duplicate(NODE* start){
//     NODE* ptr=start;
//     while(ptr->next!=NULL){
//         if(ptr->data==ptr->next->data)
//             delete ptr->next;
//     }
//     ptr=ptr->next;
//     return start;
// }
// int main() { 
// NODE* start=create(start);
// start=display(start);
// start=duplicate(start);

// }

#include <iostream>
using namespace std;

typedef struct node {
    int data;
    struct node *next;
} NODE;

NODE* create(NODE *start) {
    NODE *newnode, *ptr;
    int num;
    cout << "Enter the data (-1 to end) : ";
    cin >> num;
    while (num != -1) {
        newnode = new NODE;
        newnode->data = num;
        newnode->next = NULL; // initialize next to NULL
        
        if (start == NULL) {
            start = newnode;
        } else {
            ptr = start;
            while (ptr->next != NULL) {
                ptr = ptr->next;
            }
            ptr->next = newnode;
        }
        
        cout << "Enter the data (-1 to end): ";
        cin >> num;
    }
    return start;
}

NODE* display(NODE *start) {
    NODE *ptr;
    ptr = start;
    cout << "Entered Linked List: " << endl;
    if (ptr == NULL) {
        cout << "List is Empty" << endl;
        return start;
    }
    while (ptr != NULL) {
        cout << ptr->data << "  ";
        ptr = ptr->next;
    }
    cout << endl;
    return start;
}

NODE* duplicate(NODE* start) {
    NODE* ptr = start;
    while (ptr != NULL && ptr->next != NULL) {
        if (ptr->data == ptr->next->data) {
            NODE* temp = ptr->next;
            ptr->next = ptr->next->next;
            delete temp;
        } else {
            ptr = ptr->next;
        }
    }
    return start;
}

int main() {
    NODE* start = NULL; 
    start = create(start);
    start = display(start);
    start = duplicate(start);
    start = display(start); 
    return 0;
}
/*OUTPUT:
Entered Linked List:    
11  12  12  12  13  14  
Entered Linked List:    
11  12  13  14  */
