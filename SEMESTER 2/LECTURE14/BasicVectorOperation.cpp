//BASIC VECTOR OPERATIONS
#include<iostream>
#include<vector>
using namespace std;
int main() { 
vector<int> num{100,200,300,400,500};
cout<<"Initial Vector : ";
for(const int &i : num){
    cout<<i<<" ";
}

num.push_back(600);
num.push_back(700);
cout<<"\nUpdated Vector : ";

for(const int &i : num){
    cout<<i<<" ";
}
cout<<endl<<"$IMPORTANT FUNCTION PRESENT IN VECTOR"<<endl;
cout<<"Size: "<<num.size()<<endl;
cout<<"Capacity: "<<num.capacity()<<endl;
cout<<"First element: "<<num.front()<<endl;
cout<<"last element: "<<num.back()<<endl;
num.resize(10);
cout<<"After resize to 3, size is"<<num.size()<<endl;
cout<<"Last element: "<<num.back()<<endl;
num.insert(num.begin(),50);
cout<<"After insert at beginning, first element is: "<<num.front()<<endl;;
num.erase(num.begin()+2);
cout<<"After erase at index 1, size is: "<<num.size()<<endl;

num.clear();
cout<<"After clear, size is : "<<num.size()<<endl;
return 0;
}
