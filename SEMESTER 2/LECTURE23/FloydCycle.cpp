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


int main() {
    NODE* start = NULL; // Initialize start to NULL
    start = create(start);
    start = display(start);
    int flag=0,len;
    if (start == NULL) {
        printf("List is empty.\n");
        return NULL;
    }
     NODE *fastptr = start, *slowptr = start;
    while (fastptr->next != NULL && fastptr->next->next != NULL)
    {
        fastptr = fastptr->next->next;
        slowptr = slowptr->next;
    
    if(fastptr==slowptr){
        flag=1;
        cout<<"LOOP EXIST";
        len=1;
            while(slowptr && fastptr){
                slowptr = slowptr->next;
                fastptr = fastptr->next->next;
                len++;
                if (slowptr==fastptr)
                    break;
            }
            cout<<"Loop length: "<<len<<endl;
            break;
        }
    }
    if(!flag){
        cout<<"\nLOOP DOESN'T EXIST\n";
    }
    return 0;
}
