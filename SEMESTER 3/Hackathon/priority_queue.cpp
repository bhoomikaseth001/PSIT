#include<iostream>
#include<vector>
#include<utility>
#include<set>
#include<map>
#include<unordered_map>
using namespace std;

    int queue[5], priority[5];
    int size=0;


    void swap(int &a, int &b){
        int temp=a;
        a=b;
        b=temp;
    }
    
    
    void enqueue(int data, int p){
        if(size==5){
            cout<<"Full";
            return;
        }
        queue[size]=data;
        priority[size]=p;
        size++;

        for (int i = size - 1; i > 0; i--) {
            if (priority[i] < priority[i - 1]) {
                swap(priority[i], priority[i - 1]);
                swap(queue[i], queue[i - 1]);
            } else {
                break; // Stop if the order is correct
            }
        }
    }
