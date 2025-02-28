// #include <stdio.h>
// #include <stdlib.h>
// typedef struct Node
// {
//     int data;
//     struct Node *next;
// }node;

// node* start=NULL;

// node* insert_beg(node*);
// node* display();

// int main(){
//     start=insert_beg(start);
//     display(start);
// }

// node* insert_beg(node* start){
//     node* newnode;
//     int num;
//     printf("Enter the data:");
//     scanf("%d",&num);
//     newnode=(node*)malloc(sizeof(node));
//     newnode->data=num;
//     newnode->next=start;
//     start=newnode;
//     return start;
// }

// node* display(node* start){
//     node* ptr;
//     ptr=start;
//     while(ptr!=NULL){
//         printf("%d ",ptr->data);
//         ptr=ptr->next;
//     }
//     return start;
// }



#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
}node;

node* start=NULL;

node* insert_beg(node*);
node* display();

int main(){
    node* first = (node*)malloc(sizeof(node));
    node* second = (node*)malloc(sizeof(node));
    node* third = (node*)malloc(sizeof(node));

    first->data = 1;
    second->data = 2;
    third->data = 3;

    first->next = second;
    second->next = third;
    third->next = NULL;

    start=first;

    printf("Initial Linked List:\n");
    display(start);

    start=insert_beg(start);

    printf("\nUpdated Linked List:\n");
    display(start);
}

node* insert_beg(node* start){
    node* newnode;
    int num;
    printf("\n Enter the data:");
    scanf("%d",&num);
    newnode=(node*)malloc(sizeof(node));
    newnode->data=num;
    newnode->next=start;
    start=newnode;
    return start;
}

node* display(node* start){
    node* ptr;
    ptr=start;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    return start;
}