//to perform all the functions of Linked List
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
NODE *insert_before(NODE*,int);
NODE *insert_after(NODE*,int);
NODE *delete_from_beginning(NODE*);
NODE *delete_from_end(NODE*);
NODE *delete_specific_node(NODE*, int);
NODE *sort(NODE*);
NODE* middleofLL(NODE*);

int main()
{
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
    printf("\n Press 9 to DELETE A SPECIFIC NODE ");
    printf("\n Press 10 to SORT THE LIST ");
    printf("\n Press 11 to FIND THE MIDDLE OF THE LIST ");
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
        case 5: printf("Enter the data to be inserted before a particular node: ");
                int num3,key1;
                scanf("%d", &num3);
                start = insert_before(start, num3);
                break;
        case 6: printf("Enter the data to be inserted after a particular node: ");
                int num4,key2;
                scanf("%d", &num4);
                start = insert_after(start, num4);
                break;
        case 7: start=delete_from_beginning(start);
                break;
        case 8: start=delete_from_end(start);
                break;
        case 9: printf("Enter the index of the node to be deleted : ");
                int index;
                scanf("%d", &index);
                start=delete_specific_node(start,index);
                break;
        case 10:start=sort(start);
                break; 
        case 11:start=middleofLL(start);
                break;
        default: printf("Invalid choice : ");
        }
    }
}


NODE* create(NODE *start)
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

NODE* display(NODE *start){
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
        newnode = (NODE *)malloc(sizeof(NODE));
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
NODE* insert_before(NODE* start,int num){
    NODE *newnode,*ptr,*preptr;
    int key;
    newnode = (NODE *)malloc(sizeof(NODE));
    printf("Enter the value before which u have to add a node : ");
        scanf("%d ",&key); 
    ptr = start;
    newnode->data=num;
             
    while( ptr->next !=NULL && ptr->data != key){
    preptr=ptr;
    ptr=ptr->next;
    }
    if (ptr == NULL) {
    printf("Key not found in the list\n");
    } else {
        preptr->next=newnode;
        newnode->next=ptr;
    }
        return start;
}

NODE* insert_after(NODE* start,int num){
     NODE *newnode,*ptr,*preptr;
     int key;
        newnode = (NODE *)malloc(sizeof(NODE));
        printf("Enter the value after which u have to add a node : ");
                scanf("%d ",&key); 
        ptr = start;
        newnode->data=num;
             
        while( preptr !=NULL && preptr->data != key){
        preptr=ptr;
        ptr=ptr->next;
        }
        if (preptr == NULL) {
        printf("Key not found in the list\n");
    } else {
        preptr->next=newnode;
        newnode->next=ptr;
    }
        return start;
}

NODE* delete_from_beginning(NODE*start){
    if (start == NULL) {
        printf("The list is already empty.\n");
        return start;
    }
        NODE *ptr=start;
        start=start->next;
       free(ptr);
       //if you try to print start here u will get a random value as start will be free and not be deleted
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

NODE* delete_specific_node(NODE *start, int index){
    if (start == NULL) {
        printf("The list is already empty.\n");
        return start;
    }
    NODE *ptr=start,*preptr=NULL;
    int curr_index=0;
        if(index==0){
        start=ptr->next;
        free(start);
        return start;
    }
        while(ptr != NULL && curr_index<index){
            preptr=ptr;
            ptr=ptr->next;
            curr_index++;
        }
            if(ptr!=NULL && ptr->next!=NULL){
                preptr->next=ptr->next;
                free(ptr);
                
                return start;
            }
            else{printf("Index out of range\n");
        return start;}
    
}

NODE* sort(NODE* start){
    if (start == NULL || start->next == NULL) {
        return start;
    }
    NODE *ptr1,*ptr2;
    int temp;
    for(ptr1=start;ptr1!=NULL;ptr1=ptr1->next){
        for(ptr2=ptr1->next;ptr2 !=NULL;ptr2=ptr2->next){
            if(ptr1->data > ptr2->data){
                int temp=ptr1->data;
                ptr1->data=ptr2->data;
                ptr2->data=temp;
            }
        }
    }
    return start;
}

NODE* middleofLL(NODE* start) {
    if (start == NULL) {
        printf("List is empty.\n");
        return NULL;
    }
     NODE *fastptr = start, *slowptr = start;
    while (fastptr->next != NULL && fastptr->next->next != NULL)
    {
        fastptr = fastptr->next->next;
        slowptr = slowptr->next;
    }
    printf("Middle element is %d\n", slowptr->data);
    return start;
}

//merging
