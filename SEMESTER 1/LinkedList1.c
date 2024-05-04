#include <stdio.h>
struct node
{
    int data;
    struct node *next;
};

int main()
{

    // declaring nodes
    struct node node1;
    struct node node2;
    struct node node3;
    struct node node4;

    node1.data = 1;
    node2.data = 2;
    node3.data = 3;
    node4.data = 4;

    // printf("%d   %d  %p ",&node1,node1.data,node1.next);
    // printf("\n%p  %d  %p ",&node2,node2.data,node2.next);
    // printf("\n%p  %d  %p ",&node3,node3.data,node3.next);
    // printf("\n%p  %d  %p ",&node4,node4.data,node4.next);

    // linking the linked list
    node1.next = &node2;
    node2.next = &node3;
    node3.next = &node4;
    node4.next = NULL;

    printf("\n%d   %d  %p ", &node1, node1.data, node1.next);
    printf("\n%p  %d  %p ", &node2, node2.data, node2.next);
    printf("\n%p  %d  %p ", &node3, node3.data, node3.next);
    printf("\n%p  %d  %p ", &node4, node4.data, node4.next);

    struct node *head;
    head = &node1;

    struct node *current;
    current = head;

    printf("\nLINKED LIST : \n");
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
}