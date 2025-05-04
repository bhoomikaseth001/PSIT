#include <iostream>
#include <cstdlib>
using namespace std;

struct node {
    int data;
    node* next;
};

node* start = nullptr;

node* create(node*);
node* display(node*);
node* insert_at_beginning(node*, int);
node* insert_at_end(node*, int);
node* insert_before(node*, int);
node* insert_after(node*, int);
node* delete_from_beginning(node*);
node* delete_from_end(node*);
node* delete_specific_node(node*, int);
node* sort(node*);
node* middleofLL(node*);

int main() {
    int ch;
    while (true) {
        cout << "\n\nMENU DRIVEN";
        cout << "\n Press 1 to CREATE LIST ";
        cout << "\n Press 2 to DISPLAY LIST ";
        cout << "\n Press 3 to INSERT AT BEGINNING ";
        cout << "\n Press 4 to INSERT AT END ";
        cout << "\n Press 5 to INSERT BEFORE A NODE ";
        cout << "\n Press 6 to INSERT AFTER A NODE ";
        cout << "\n Press 7 to DELETE FROM BEGINNING ";
        cout << "\n Press 8 to DELETE FROM END ";
        cout << "\n Press 9 to DELETE A SPECIFIC NODE ";
        cout << "\n Press 10 to SORT THE LIST ";
        cout << "\n Press 11 to FIND THE MIDDLE OF THE LIST ";
        cout << "\n Press 0 to EXIT ";
        cout << "\n Enter your choice : ";
        cin >> ch;

        switch (ch) {
            case 0: exit(0);
            case 1: start = create(start); break;
            case 2: start = display(start); break;
            case 3: {
                int num;
                cout << "Enter data to insert at beginning: ";
                cin >> num;
                start = insert_at_beginning(start, num);
                break;
            }
            case 4: {
                int num;
                cout << "Enter data to insert at end: ";
                cin >> num;
                start = insert_at_end(start, num);
                break;
            }
            case 5: {
                int num;
                cout << "Enter data to insert before a node: ";
                cin >> num;
                start = insert_before(start, num);
                break;
            }
            case 6: {
                int num;
                cout << "Enter data to insert after a node: ";
                cin >> num;
                start = insert_after(start, num);
                break;
            }
            case 7: start = delete_from_beginning(start); break;
            case 8: start = delete_from_end(start); break;
            case 9: {
                int idx;
                cout << "Enter index of node to delete: ";
                cin >> idx;
                start = delete_specific_node(start, idx);
                break;
            }
            case 10: start = sort(start); break;
            case 11: start = middleofLL(start); break;
            default: cout << "Invalid choice!\n"; break;
        }
    }
}

node* create(node* start) {
    node* newnode, *ptr;
    int num;
    cout << "Enter the data (-1 to end): ";
    cin >> num;
    while (num != -1) {
        newnode = new node;
        newnode->data = num;
        newnode->next = nullptr;
        if (!start) {
            start = newnode;
        } else {
            ptr = start;
            while (ptr->next) ptr = ptr->next;
            ptr->next = newnode;
        }
        cout << "Enter the data (-1 to end): ";
        cin >> num;
    }
    return start;
}

node* display(node* start) {
    if (!start) {
        cout << "List is empty.\n";
        return start;
    }
    cout << "Linked List: ";
    node* ptr = start;
    while (ptr) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
    return start;
}

node* insert_at_beginning(node* start, int num) {
    node* newnode = new node;
    newnode->data = num;
    newnode->next = start;
    return newnode;
}

node* insert_at_end(node* start, int num) {
    node* newnode = new node;
    newnode->data = num;
    newnode->next = nullptr;
    if (!start) return newnode;
    node* ptr = start;
    while (ptr->next) ptr = ptr->next;
    ptr->next = newnode;
    return start;
}

node* insert_before(node* start, int num) {
    int key;
    cout << "Enter the value before which to insert: ";
    cin >> key;

    node* newnode = new node;
    newnode->data = num;

    if (!start) return start;

    if (start->data == key) {
        newnode->next = start;
        return newnode;
    }

    node* ptr = start, *preptr = nullptr;
    while (ptr && ptr->data != key) {
        preptr = ptr;
        ptr = ptr->next;
    }

    if (!ptr) {
        cout << "Key not found.\n";
        delete newnode;
        return start;
    }

    preptr->next = newnode;
    newnode->next = ptr;
    return start;
}

node* insert_after(node* start, int num) {
    int key;
    cout << "Enter the value after which to insert: ";
    cin >> key;

    node* ptr = start;
    while (ptr && ptr->data != key) {
        ptr = ptr->next;
    }

    if (!ptr) {
        cout << "Key not found.\n";
        return start;
    }

    node* newnode = new node;
    newnode->data = num;
    newnode->next = ptr->next;
    ptr->next = newnode;

    return start;
}

node* delete_from_beginning(node* start) {
    if (!start) {
        cout << "List is empty.\n";
        return start;
    }
    node* temp = start;
    start = start->next;
    delete temp;
    return start;
}

node* delete_from_end(node* start) {
    if (!start) {
        cout << "List is empty.\n";
        return nullptr;
    }
    if (!start->next) {
        delete start;
        return nullptr;
    }

    node* ptr = start, *prev = nullptr;
    while (ptr->next) {
        prev = ptr;
        ptr = ptr->next;
    }
    prev->next = nullptr;
    delete ptr;
    return start;
}

node* delete_specific_node(node* start, int index) {
    if (!start) {
        cout << "List is empty.\n";
        return start;
    }

    node* ptr = start, *preptr = nullptr;
    int curr_index = 0;

    if (index == 0) {
        start = start->next;
        delete ptr;
        return start;
    }

    while (ptr && curr_index < index) {
        preptr = ptr;
        ptr = ptr->next;
        curr_index++;
    }

    if (!ptr) {
        cout << "Index out of range.\n";
        return start;
    }

    preptr->next = ptr->next;
    delete ptr;
    return start;
}

node* sort(node* start) {
    if (!start || !start->next) return start;

    node *i, *j;
    for (i = start; i && i->next; i = i->next) {
        for (j = i->next; j; j = j->next) {
            if (i->data > j->data) {
                int temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
    return start;
}

node* middleofLL(node* start) {
    if (!start) {
        cout << "List is empty.\n";
        return start;
    }

    node* slow = start, *fast = start;
    while (fast && fast->next) {
        fast = fast->next->next;
        if (fast) slow = slow->next;
    }
    cout << "Middle element is: " << slow->data << endl;
    return start;
}
