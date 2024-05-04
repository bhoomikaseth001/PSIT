// #include<stdio.h>
// #include<string.h>
// int printstr(char str[]) {
//     int i;
//     for(i=0;str[i]!='\0';i++)
//         printf("%c",str[i]);
// }

// int main(){
//     char str1[]={'S','T','R','I','N','G','\0'};
//     char str2[]="Hello";
//     printf("Length of string 1 is %d\n",strlen(str1));
//     printf("Length of string 2 is %d\n",strlen(str2));
//     printf("Reverse of string 1 is %s\n",strrev(str1));
//     printf("Reverse of string 2 is %s\n",strrev(str2));
// }

// #include<stdio.h>
// int main(){
//     char str[];
//     gets(str)
// }


#include<stdio.h>
#include<stdio.h>
main()
{
char name[20];
printf("Enter your name\t");
scanf("%[^abcd]",name);
printf("Your name is %s",name);
}