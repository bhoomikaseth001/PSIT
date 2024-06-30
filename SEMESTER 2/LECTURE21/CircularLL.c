#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} NODE;

NODE *start = NULL;
NODE *create(NODE*);
NODE *display(NODE*);
NODE *insert_at_beginning(NODE*, int);
NODE *insert_at_end(NODE*, int);
NODE *insert_before(NODE*, int, int);
NODE *insert_after(NODE*, int, int);
NODE *delete_from_beginning(NODE*);
NODE *delete_from_end(NODE*);
NODE *delete_specific_node(NODE*, int);
NODE *sort(NODE*);
NODE* middleofLL(NODE*);

int main()
{
    int ch;
    while(1)
    {
        printf("MENU DRIVEN\n");
        printf("Press 1 to CREATE LIST\n");
        printf("Press 2 to DISPLAY LIST\n");
        printf("Press 3 to INSERT AT BEGINNING\n");
        printf("Press 4 to INSERT AT END\n");
        printf("Press 5 to INSERT BEFORE A NODE\n");
        printf("Press 6 to INSERT AFTER A NODE\n");
        printf("Press 7 to DELETE FROM BEGINNING\n");
        printf("Press 8 to DELETE FROM END\n");
        printf("Press 9 to DELETE A SPECIFIC NODE\n");
        printf("Press 10 to SORT THE LIST\n");
        printf("Press 11 to FIND THE MIDDLE OF THE LIST\n");
        printf("Press 0 to EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        int num, key;
        switch(ch){
            case 0: exit(0);
            case 1: start = create(start); break;
            case 2: display(start); break;
            case 3: 
                printf("Enter the data to be inserted at the beginning: ");
                scanf("%d", &num);
                start = insert_at_beginning(start, num);
                break;
            case 4: 
                printf("Enter the data to be inserted at the end: ");
                scanf("%d", &num);
                start = insert_at_end(start, num);
                break;
            case 5: 
                printf("Enter the data to be inserted before a particular node: ");
                scanf("%d", &num);
                printf("Enter the key: ");
                scanf("%d", &key);
                start = insert_before(start, num, key);
                break;
            case 6: 
                printf("Enter the data to be inserted after a particular node: ");
                scanf("%d", &num);
                printf("Enter the key: ");
                scanf("%d", &key);
                start = insert_after(start, num, key);
                break;
            case 7: start = delete_from_beginning(start); break;
            case 8: start = delete_from_end(start); break;
            case 9: 
                printf("Enter the index of the node to be deleted: ");
                int index;
                scanf("%d", &index);
                start = delete_specific_node(start, index);
                break;
            case 10: start = sort(start); break;
            case 11: start = middleofLL(start); break;
            default: printf("Invalid choice\n");
        }
    }
    return 0;
}

NODE* create(NODE *start)
{
    NODE *newnode, *ptr;
    int num;
    printf("Enter the data (-1 to end): ");
    scanf("%d", &num);
    while (num != -1)
    {
        newnode = (NODE *)malloc(sizeof(NODE));
        newnode->data = num;
        if (start == NULL)
        {
            start = newnode;
            newnode->next = start;
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
        printf("Enter the data (-1 to end): ");
        scanf("%d", &num);
    }
    return start;
}

NODE* display(NODE *start)
{
    NODE *ptr;
    ptr = start;
    if (start == NULL)
    {
        printf("List is Empty\n");
        return start;
    }
    printf("Entered Circular Linked List:\n");
    do
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    } while (ptr != start);
    printf("\n");
    return start;
}

NODE* insert_at_beginning(NODE *start, int num)
{
    NODE *newnode, *ptr;
    newnode = (NODE *)malloc(sizeof(NODE));
    newnode->data = num;
    if (start == NULL)
    {
        start = newnode;
        newnode->next = start;
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
        start = newnode;
    }
    return start;
}

NODE* insert_at_end(NODE *start, int num)
{
    NODE *newnode, *ptr;
    newnode = (NODE *)malloc(sizeof(NODE));
    newnode->data = num;
    if (start == NULL)
    {
        start = newnode;
        newnode->next = start;
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
    return start;
}

NODE* insert_before(NODE *start, int num, int key)
{
    NODE *newnode, *ptr, *preptr;
    newnode = (NODE *)malloc(sizeof(NODE));
    newnode->data = num;
    if (start == NULL)
    {
        printf("List is empty\n");
        return start;
    }
    ptr = start;
    if (start->data == key) // if the key is the first node
    {
        while (ptr->next != start)
        {
            ptr = ptr->next;
        }
        ptr->next = newnode;
        newnode->next = start;
        start = newnode;
    }
    else
    {
        while (ptr->next != start && ptr->data != key)
        {
            preptr = ptr;
            ptr = ptr->next;
        }
        if (ptr->data == key)
        {
            preptr->next = newnode;
            newnode->next = ptr;
        }
        else
        {
            printf("Key not found in the list\n");
        }
    }
    return start;
}

NODE* insert_after(NODE *start, int num, int key)
{
    NODE *newnode, *ptr;
    newnode = (NODE *)malloc(sizeof(NODE));
    newnode->data = num;
    if (start == NULL)
    {
        printf("List is empty\n");
        return start;
    }
    ptr = start;
    while (ptr->next != start && ptr->data != key)
    {
        ptr = ptr->next;
    }
    if (ptr->data == key)
    {
        newnode->next = ptr->next;
        ptr->next = newnode;
    }
    else
    {
        printf("Key not found in the list\n");
    }
    return start;
}

NODE* delete_from_beginning(NODE *start)
{
    NODE *ptr;
    if (start == NULL)
    {
        printf("The list is already empty\n");
        return start;
    }
    ptr = start;
    if (start->next == start) // if there's only one node
    {
        free(start);
        start = NULL;
    }
    else
    {
        while (ptr->next != start)
        {
            ptr = ptr->next;
        }
        NODE *temp = start;
        ptr->next = start->next;
        start = start->next;
        free(temp);
    }
    return start;
}

NODE* delete_from_end(NODE *start)
{
    NODE *ptr, *preptr;
    if (start == NULL)
    {
        printf("The list is already empty\n");
        return start;
    }
    ptr = start;
    if (start->next == start) // if there's only one node
    {
        free(start);
        start = NULL;
    }
    else
    {
        while (ptr->next != start)
        {
            preptr = ptr;
            ptr = ptr->next;
        }
        preptr->next = start;
        free(ptr);
    }
    return start;
}

NODE* delete_specific_node(NODE *start, int index)
{
    NODE *ptr, *preptr;
    if (start == NULL)
    {
        printf("The list is already empty\n");
        return start;
    }
    ptr = start;
    if (index == 0) // if the first node is to be deleted
    {
        if (start->next == start) // if there's only one node
        {
            free(start);
            start = NULL;
        }
        else
        {
            while (ptr->next != start)
            {
                ptr = ptr->next;
            }
            NODE *temp = start;
            ptr->next = start->next;
            start = start->next;
            free(temp);
        }
        return start;
    }
    int curr_index = 0;
    do
    {
        preptr = ptr;
        ptr = ptr->next;
        curr_index++;
    } while (ptr != start && curr_index < index);
    if (curr_index == index && ptr != start)
    {
        preptr->next = ptr->next;
        free(ptr);
    }
    else
    {
        printf("Index out of range\n");
    }
    return start;
}

NODE* sort(NODE *start)
{
    if (start == NULL || start->next == start)
    {
        return start;
    }
    NODE *ptr1, *ptr2;
    int temp;
    ptr1 = start;
    do
    {
        ptr2 = ptr1->next;
        while (ptr2 != start)
        {
            if (ptr1->data > ptr2->data)
            {
                temp = ptr1->data;
                ptr1->data = ptr2->data;
                ptr2->data = temp;
            }
            ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    } while (ptr1->next != start);
    return start;
}

NODE* middleofLL(NODE *start){
    if (start == NULL || start->next == start)
    {
        printf("List is empty or has only one node\n");
        return start;
    }
    NODE *fastptr = start, *slowptr = start;
    while (fastptr->next != start && fastptr->next->next != start)
    {
        fastptr = fastptr->next->next;
        slowptr = slowptr->next;
    }
    printf("Middle element is %d\n", slowptr->data);
    return start;
}
