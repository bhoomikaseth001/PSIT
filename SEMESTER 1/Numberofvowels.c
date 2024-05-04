#include<stdio.h>
#include<string.h>
#include<conio.h>
int main() {
    char str[50];
    int i,count=0;
    printf("Enter the string");
    gets(str);
    strcpy(str,strlwr(str));
    
    for(i=0;str[i]!='\0';i++) {
    if(str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o'||str[i]=='u')
        count++;
    }
    printf("Number of vowels in the entered string = %d\n",count);
    printf("String in uppercase : %s",strupr(str));
}