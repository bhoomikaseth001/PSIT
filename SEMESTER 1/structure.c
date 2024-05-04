// #include<stdio.h>
// #include<stdlib.h>
// struct Student{
//     int id;
//     char subject[20];
//     int marks;
// };
// struct Student Anjali,Rahul;
// // struct Student Anjali={1,'A',99};
// // struct Student Rahul={2,'R',89};

// int main(){
//     Anjali.id=1;
//     Rahul.id=2;
//     // Anjali.alpha='A';
//     // Rahul.alpha='R';
//     strcpy(Anjali.subject,"Mathematics");
//     strcpy(Rahul.subject,"English");
//     Anjali.marks=99;
//     Rahul.marks=89;
//     printf("Anjali's id is = %d,Favorite alphabet = %s, and marks = %d\n",Anjali.id,Anjali.subject,Anjali.marks);
//     printf("Rahul's id is = %d,Favorite alphabet = %s, and marks = %d",Rahul.id,Rahul.subject,Rahul.marks);
    
// }

// #include<stdio.h>
// struct Student{
//     int stuno;
// };
// int main(){
//     struct Student stu1;
//     struct Student *pstu;
//     pstu=&stu1;
//     stu1.stuno=10;
//     printf("%d\n",stu1.stuno);
//     printf("%d\n",pstu->stuno);
// }

// #include<stdio.h>
// #include<stdlib.h>
// struct Student{
//     char name[10];
//     int roll_no;
//     };
//     int main(){
//         int i,n;
//         printf("Enter the number of students");
//         scanf("%d",&n);
//         struct Student stu[n];
//         printf("Enter the records of %d students",n);
//         for(i=0;i<n;i++){
//             printf("\nEnter the Name");
//             scanf("%s",&stu[i].name);
//             printf("\nEnter the Rollno.");
//             scanf("%d",&stu[i].roll_no);
            
//         } 
//         printf("\nStudent Details");
//         for(i=0;i<n;i++){
//             printf("\nName : %s , Roll no. : %d",stu[i].name,stu[i].roll_no);
//         }   
//     }

#include <stdio.h>
union MyUnion {
int num1;
float num2;
};
int main()
{
union MyUnion un;
printf("Size of union: %ld",sizeof(un));

un.num1 = 10;
printf("\nNum1: %d, Num2: %f",un.num1, un.num2);
un.num2 = 10.34;
printf("\nNum1: %f, Num2: %f",un.num1, un.num2);
}