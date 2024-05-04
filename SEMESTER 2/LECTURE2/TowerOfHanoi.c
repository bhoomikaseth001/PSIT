#include<stdio.h>
void move(int,int,int,int);
void main(){
    int disk=3;
    printf("Follow these moves---->\n");
    move(disk,1,3,2);
}

void move(int count,int start,int finish, int temp){
    if(count >0){
        move(count-1,start,temp,finish);
        printf("Move disk %d from %d to %d \n",count,start,finish);
        move(count-1,temp,finish,start);
    }
}