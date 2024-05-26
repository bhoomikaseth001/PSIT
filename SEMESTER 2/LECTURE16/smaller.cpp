//WAP in CPP that returns the elemen in a vector that are strictly smaller than their adjacent left & right neighbour

#include<iostream>
#include<vector>
#include<utility>
using namespace std;
int main() { 
 vector<int>vec={2,1,4,3,5,0,6};
// for(const int &i : vec){
    for(int i = 1; i < vec.size() - 1; i++){
    //if(vec[i-1]>vec[i] && vec[i+1]>vec[i])
    if((vec.at(i-1)>vec.at(i)) && (vec.at(i+1)>vec.at(i)))
        cout<<vec.at(i)<<" ";
 }
return 0;
}
/*OUTPUT
  1 3 0  */