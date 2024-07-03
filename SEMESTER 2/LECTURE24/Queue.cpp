#include<iostream>
using namespace std;
void insert(int, int, int, int*);
void display(int, int, int*);
int main() { 
    int size;
    cout<<"Enter the size ";
    cin>>size;
 int queue[size];
 int rear,front;
int ch;
    for(int i=0;i<1000;i++){
    cout<<"\n Enter your choice : ";
    cin>>ch;
    switch(ch){
        case 0: exit(0);
                break;
        case 1:insert(-1,-1,size,queue);
                break;
        case 2: display(-1,-1,queue);
                break;
        default: cout<<"Invalid choice : ";
    }
    }
}
void insert(int rear,int front,int size, int *queue){
    int num;    
    cout<<"Enter the value";
    cin>>num;   
        if(rear==size-1)
    cout<<"OVERFLOW";
    else  if (front==-1&&rear==-1)
            front=rear=0;
        else
            rear++;
        queue[rear]=num;
     
}
void display(int rear,int front,int *queue){
    if(front==-1 && rear==-1)
        printf("Queue is empty");
        else{
            for(int i=front;i<=rear;i++)
                cout<<queue[i]<<" ";

        }
}
// int delete(){
//     int val;
//     if (front=-1||front>rear)
//         cout<<"underflow";
//         return -1;

// }




