//Swap content of 2 vectors
#include<iostream>
#include<vector>
#include<utility>
using namespace std;
int main() { 
    vector<int>vec1={100,200,300,400,500};
    vector<int>vec2={10,20,30,40,50};

    cout<<"Before swap : "<<endl;
    cout<<"Vector 1: ";
    for(int val:vec1)
        cout<<val<<" ";
    cout<<endl;
    cout<<"Vector 2: ";
    for(int val:vec2)
        cout<<val<<" ";
    cout<<endl;

    //vec1.swap(vec2);
    swap(vec1,vec2);

    cout<<"After swap : "<<endl;
    cout<<"Vector 1: ";
    for(int val:vec1)
        cout<<val<<" ";
    cout<<endl;
    cout<<"Vector 2: ";
    for(int val:vec2)
        cout<<val<<" ";
    cout<<endl;
return 0;
}

/*OUTPUT
Before swap : 
Vector 1: 100 200 300 400 500 
Vector 2: 10 20 30 40 50      
After swap : 
Vector 1: 10 20 30 40 50      
Vector 2: 100 200 300 400 500  */