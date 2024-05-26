#include<iostream>
#include<vector>
using namespace std;
int main() { 
vector<int> M={11,12,13,14,15};
vector<int> N{6,7,8,9,10};
vector<int> O(5,12);
cout <<"vetor1 =";
for(const int & i :M){
    cout << i<<" ";
}
cout<<endl;
cout <<"vetor2 =";
for(const int & i :N){
    cout << i<<" ";
}
cout<<endl;
cout <<"vetor3 =";
for(const int & i :O){
    cout << i<<" ";
}
cout<<endl;
return 0;
}