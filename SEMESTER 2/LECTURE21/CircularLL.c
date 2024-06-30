#include<stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}NODE;
NODE *start = NULL;


NODE* create(NODE* start)
{
    NODE* newnode,*ptr;
    int num;
    printf("Enter the data(-1 to end) : ");
    scanf("%d",&num);
    while(num!=-1){
        newnode= (NODE*) malloc(sizeof(NODE));
        newnode->data=num;
        if(start==NULL){
            
            start=newnode;
            newnode->next=start;
        }
        else
        {
            ptr = start;
            while (ptr->next != start)
            {
                ptr = ptr->next;
            }
            ptr->next = newnode;
            newnode->next = start;
        }
        printf("\nEnter the data (-1 to end): ");
    scanf("%d", &num);
}
//ptr=ptr->next;
return start;
}
// NODE *display(NODE *start){
//     NODE *ptr;
//     ptr=start;
//     printf("Entered Linked List : \n");
//     printf("%d ",ptr->data);
//     ptr=ptr->next;
//     while(ptr!=start){
//         printf("  %d ",ptr->data);
//         ptr=ptr->next;
//     }
//     printf("\n");
//     return start;
// } 

NODE *display(NODE *start){
    NODE *ptr;
    ptr=start;
    printf("Entered Linked List : \n");
    printf("%d ",ptr->data);
    ptr=ptr->next;
    while(ptr->next!=start){
        printf("  %d ",ptr->data);
        ptr=ptr->next;
    }
    printf("  %d ",ptr->data);
    printf("\n");
    return start;
} 
// NODE* insert_beg(NODE* start,int num){
//     NODE*ptr;
//     NODE* newnode =(NODE*)malloc(sizeof(NODE));
//     newnode->data=num;
//         newnode->next=start;
//         start=newnode;
//         ptr=ptr->next;
//         return start;
// }
int main(){
    start=create(start);
    display(start);
    // int num;
    // printf("Enter the element to be inserted : ");
    // scanf("%d ",&num);
    // start=insert_beg(start,num);
 }