//WAP in CPP to find median of a matrix
#include<iostream>
#include<vector>
#include<utility>
using namespace std;
int main() { 
    int n,mid;
    float median;
    cout<<"Enter the size : ";
    cin>>n;
vector<int>vec(n);
cout<<"Enter the elements : ";
for(int i=0;i<n;i++)
    cin>>vec.at(i);

for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(vec.at(j)>vec.at(j+1))
            swap(vec.at(j),vec.at(j+1));
    }
}
cout<<"Sorted Elements : ";
for(int i=0;i<n;i++)
    cout<<vec.at(i)<<" ";
cout<<endl;

if(n%2==0)
median=(vec.at(n/2)+vec.at((n/2)-1))/2.0;
else
median=vec.at(((n-1)/2));
cout<<median<<endl;
return 0;
}
/*OUTPUT
Enter the size : 6
Enter the elements : 4 3 2 5 6 1
Sorted Elements : 1 2 3 4 5 6 
3.5

Enter the size : 5
Enter the elements : 3 4 2 1 5
Sorted Elements : 1 2 3 4 5
3   */