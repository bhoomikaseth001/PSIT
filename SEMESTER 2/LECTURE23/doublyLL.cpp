
#include<iostream>

using namespace std;

typedef struct node {
    struct node* prev;
    struct node* next;
    int data;
} NODE;

NODE* create_LL() {
    NODE* start = NULL;
    NODE* ptr = start;
    int num;
    cout << "Enter the data (-1 to end) : ";
    cin >> num;
    while (num != -1) {
        NODE* newnode = new NODE;
        newnode->data = num;
        newnode->prev = NULL;
        newnode->next = NULL;

        if (start == NULL) {
            start = newnode;
        } else {
            ptr = start;
            while (ptr->next != NULL)
                ptr = ptr->next;
            ptr->next = newnode;
            newnode->prev = ptr;
        }
        cout << "Enter the data (-1 to end) : ";
        cin >> num;
    }
    return start;
}

NODE* getEndNode(NODE* head) {
    NODE* ptr = head;
    while (ptr->next) {
        ptr = ptr->next;
    }
    return ptr;
}

void display(NODE* head, int revFlag = 0, int debugFlag = 0) {
    NODE* cur = head;
    if (revFlag) {
        cur = getEndNode(head);
        cout << "Reversed ";
    }
    cout << "Doubly Linked List:\n";
    while (cur != NULL) {
        if (debugFlag)
            cout << "current value: ";
        cout << cur->data << " ";
        if (debugFlag) {
            cout << "current address: " << cur << " ";
            cout << "previous address: " << cur->prev << " ";
            cout << "next address: " << cur->next << endl;
        }
        if (revFlag)
            cur = cur->prev;
        else
            cur = cur->next;
    }
    cout << endl;
}

NODE* insert_beginning(NODE* start) {
    int num;
    cout << "Enter the data to be inserted at the beginning : ";
    cin >> num;
    NODE* newnode = new NODE;
    newnode->data = num;
    newnode->next = start;
    newnode->prev = NULL;

    if (start != NULL) {
        start->prev = newnode;
    }
    start = newnode;
    return start;
}

NODE* insert_end(NODE* start) {
    int num;
    cout << "Enter the data to be inserted at the end :";
    cin >> num;
    NODE* ptr = start;
    NODE* newnode = new NODE;
    while (ptr->next != NULL)
        ptr = ptr->next;
    newnode->data = num;
    newnode->prev = ptr;
    newnode->next = NULL;
    ptr->next = newnode;
    return start;
}

NODE* insert_after(NODE* start) {
    int num, val;
    cout << "Enter the data to be inserted after a value :";
    cin >> num;
    NODE* ptr = start;
    NODE* newnode = new NODE;
    cout << "Enter the data after which the data is to be inserted : ";
    cin >> val;
    while (ptr != NULL && ptr->data != val)
        ptr = ptr->next;
    if (ptr != NULL) {
        newnode->data = num;
        newnode->prev = ptr;
        newnode->next = ptr->next;
        if (ptr->next != NULL) {
            ptr->next->prev = newnode;
        }
        ptr->next = newnode;
    }
    return start;
}

NODE* insert_before(NODE* start) {
    int num, val;
    cout << "Enter the data to be inserted before a value :";
    cin >> num;
    NODE* ptr = start;
    NODE* newnode = new NODE;
    cout << "Enter the data before which the data is to be inserted : ";
    cin >> val;
    while (ptr != NULL && ptr->data != val)
        ptr = ptr->next;
    if (ptr != NULL) {
        newnode->data = num;
        newnode->prev = ptr->prev;
        newnode->next = ptr;
        if (ptr->prev != NULL) {
            ptr->prev->next = newnode;
        } else {
            start = newnode;
        }
        ptr->prev = newnode;
    }
    return start;
}

NODE* delete_beginning(NODE* start) {
    NODE* ptr = start;
    cout<<"Deleting element from the beginning : "<<endl;
    if (start != NULL) {
        start = start->next;
        if (start != NULL)
            start->prev = NULL;
        delete ptr;
    }
    return start;
}

NODE* delete_end(NODE* start) {
        cout<<"Deleting element from the end : "<<endl;

    if (start == NULL) {
        return start;
    }
    NODE* ptr = start;
    while (ptr->next != NULL)
        ptr = ptr->next;
    if (ptr->prev != NULL) 
        ptr->prev->next = NULL;
    // } else {
    //     start = NULL;
    // }
    delete ptr;
    return start;
}

NODE* delete_a_particular_node(NODE* start){
    int val;
    NODE* ptr = start;
    cout << "Enter the data is to be deleted : ";
    cin >> val;
    while (ptr != NULL && ptr->data != val)
        ptr = ptr->next;
    ptr->prev->next = ptr->next ;
    ptr->next=ptr->prev;
    delete ptr;
    return start;
}

NODE* delete_before(NODE* start) {
    int val;
    cout << "Enter the data before which the data is to be deleted: ";
    cin >> val;

    NODE* ptr = start;
    while (ptr != NULL && ptr->data != val) {
        ptr = ptr->next;
    }

    if (ptr == NULL || ptr->prev == NULL) {
        // Value not found or it is the first node (no node before it)
        cout << "No node exists before the specified value." << endl;
        return start;
    }

    NODE* node_to_delete = ptr->prev;

    if (node_to_delete->prev != NULL) {
        node_to_delete->prev->next = ptr;
        ptr->prev = node_to_delete->prev;
    } else {
        // The node to delete is the first node
        start = ptr;
        ptr->prev = NULL;
    }

    delete node_to_delete;
    return start;
}

NODE* delete_after(NODE* start) {
    int val;
    cout << "Enter the data after which the data is to be deleted: ";
    cin >> val;

    NODE* ptr = start;
    while (ptr != NULL && ptr->data != val) {
        ptr = ptr->next;
    
    }

    NODE* node_to_delete = ptr->next;

    if (node_to_delete->next != NULL) {
        node_to_delete->next->prev = ptr;
        ptr->next = node_to_delete->next;
    } else {
        // The node to delete is the last node
       
        ptr->next = NULL;
    }

    delete node_to_delete;
    return start;
}

int main() {
    int ch;
    for(int i=0;i<1000;i++){
    printf("MENU DRIVEN");
    printf("\n Press 1 to CREATE LIST ");
    printf("\n Press 2 to DISPLAY LIST ");
    printf("\n Press 3 to INSERT AT BEGINNING ");
    printf("\n Press 4 to INSERT AT END ");
    printf("\n Press 5 to INSERT BEFORE A NODE ");
    printf("\n Press 6 to INSERT AFTER A NODE ");
    printf("\n Press 7 to DELETE FROM BEGINNING ");
    printf("\n Press 8 to DELETE FROM END ");
    printf("\n Press 9 to DELETE A PARTICULAR NODE ");
    printf("\n Press 10 to DELETE BEFORE A NODE ");
    printf("\n Press 11 to DELETE AFTER A NODE ");
    printf("\n Press 0 to EXIT ");
    printf("\n Enter your choice : ");
    scanf("%d",&ch);
    switch(ch){
    NODE* start;
    case 0: exit(0);
            break;
    case 1: start= create_LL();
            break;
    case 2: display(start);
            cout<<endl;
            display(start, 0, 1);
            break;
    case 3: start = insert_beginning(start);
            break;
    case 4: start = insert_end(start);
            break;
    case 5: start = insert_before(start);
            break;
    case 6: start = insert_after(start);
            break;
    case 7: start = delete_beginning(start);
            break;
    case 8: start = delete_end(start);
            break;
    case 9: start=delete_a_particular_node(start);
            break;
    case 10:start = delete_before(start);
            break;
    case 11:start = delete_after(start);
            break;
    default: cout<<"INVALID CHOICE"<<endl;
}
    }
}


