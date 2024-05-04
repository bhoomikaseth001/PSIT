// #include<stdio.h>
// int main() {
    // char a='7';
    // char* ptr=&a;
    // int *ptr2=NULL;
    // printf("The value of a is: %d\n",a);
    // printf("The value of a is: %d\n",*ptr);
    //printf("The address of a is: %p\n",ptr);
//printf("The address of pointer to a is: %d\n",&ptr);
    //printf("The address of a is: %d\n",&a);
    //printf("some garbage value is : %p\n",ptr2);
        //printf("%p\n",ptr-1);
//     int arr[]={2,4,6,8,10};
//     int *arptr=arr;
//     printf("%d\n",&arr);
//     printf("%d\n",*arr);
//     printf("%d\n",arr[0]);    
//     printf("%d\n",&arr[0]);    
//     printf("%d\n",*(arr+1));
//     printf("%d\n",*(arr+2));
//     printf("%d\n",(arr+1));
//     printf("%d\n",(arr+2));
//     arptr++;
// printf("%d",*(arptr+1));

// }

// #include<stdio.h>
// int swap(int *x,int* y) {
//     int temp=*x;
//     *x=*y;
//     *y=temp;
// }
// int main() {
//     int a,b;
//     scanf("%d%d",&a,&b);
//     printf("Values before swapping :\na = %d , b = %d",a,b);
//     swap(&a,&b);
//     printf("\nValues after swapping :\na = %d , b = %d",a,b);
// }

// #include<stdio.h>  
// struct st  
// {  
//     int x;  
    
// };  
    
// int main()  
// {  
//     struct st next; 
//     struct st temp;  
//     temp.x = 10;  
//     temp.next=temp;  
//     printf("%d", temp.x);  
//     return 0;  
// } 

#include<stdio.h>
union test 
{ 
    int x; 
    char arr[4]; 
    int y; 
}; 
  
int main() 
{ 
    union test t; 
    t.x = 0; 
    t.arr[1] = 'G'; 
    printf("%s", t.arr); 
    return 0; 
} 