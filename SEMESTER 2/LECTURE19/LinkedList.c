#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}NODE;
NODE *start = NULL;
NODE *create(NODE*);
NODE *display(NODE*);
NODE *insert_at_beginning(NODE*,int);
NODE *insert_at_end(NODE*,int);
NODE *delete_from_beginning(NODE*);
NODE *delete_from_end(NODE*);

int main()
{
    int ch;
    while(1){
    printf("MENU DRIVEN");
    printf("\n Press 1 to CREATE LIST ");
    printf("\n Press 2 to DISPLAY LIST ");
    printf("\n Press 3 to INSERT AT BEGINNING ");
    printf("\n Press 4 to INSERT AT END ");
    printf("\n Press 5 to DELETE FROM BEGINNING ");
    printf("\n Press 6 to DELETE FROM END ");
    printf("\n Press 0 to EXIT ");
    printf("\n Enter your choice : ");
    scanf("%d",&ch);
    switch(ch){
        case 0: exit(0);
                break;
        case 1: start = create(start);
                break;
        case 2: display(start);
                break;
        case 3: printf("Enter the data to be inserted at the beginning: ");
                int num1;
                scanf("%d", &num1);
                start = insert_at_beginning(start, num1);
                break;
        case 4: printf("Enter the data to be inserted at the end: ");
                int num2;
                scanf("%d", &num2);
                start = insert_at_end(start, num2);
                break;
        case 5: start=delete_from_beginning(start);
                break;
        case 6: start=delete_from_end(start);
                break;
        default: printf("Invalid choice : ");

        }
    }
}


NODE *create(NODE *start)
{
    NODE *newnode, *ptr;
    int num;
    printf("Enter the data (-1 to end) : ");
    scanf("%d", &num);
    while (num != -1)
    {
        newnode = (NODE *)malloc(sizeof(NODE));
        newnode->data = num;
        if (start == NULL)
        {
            newnode->next = NULL;
            start = newnode;
        }
        else
        {
            ptr = start;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = newnode;
            newnode->next = NULL;
        }
        printf("\nEnter the data (-1 to end): ");
        scanf("%d", &num);
    }
    return start;
}

NODE *display(NODE *start){
    NODE *ptr;
    ptr=start;
    printf("Entered Linked List : \n");
    if(ptr==NULL){
        printf("List is Empty\n");
        return start;
    }
    while(ptr!=NULL){
        printf("  %d ",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
    return start;
}

NODE* insert_at_beginning(NODE*start,int num){
        NODE *newnode;
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data=num;
        newnode->next=start;
        start=newnode;
        return start;
}

NODE* insert_at_end(NODE *start,int num){
        NODE *newnode,*ptr;
        newnode = (NODE *)malloc(sizeof(NODE));
        newnode->data=num;
        ptr = start;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = newnode;
            newnode->next = NULL;
        return start;
}

NODE* delete_from_beginning(NODE*start){
    if (start == NULL) {
        printf("The list is already empty.\n");
        return start;
    }
        NODE *temp=start;
        start=start->next;
       free(temp);
        return start;
}

NODE* delete_from_end(NODE *start){
        NODE *ptr,*ptr1;
        if (start == NULL) {
        printf("The list is already empty.\n");
        return start;
    }
        if(start->next==NULL){
            free(start);
            start=NULL;
        }
        else{
            ptr=start;
            while (ptr->next != NULL)
            {
                ptr1=ptr;
                ptr = ptr->next;
            }
            ptr1->next = NULL;
            free(ptr);
        }
             return start;
}
