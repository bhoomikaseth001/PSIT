//    WAP in CPP to print a matrix and then sort rows in ascending and descending order alternatively 
//complexity O(n^3)
 
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int r,c,i,j,k;
    cout<<"Enter the rows ";
    cin>>r;
    cout<<"Enter the columns ";
    cin>>c;

    int arr[r][c];

    cout<<"Enter the elements: "<<endl;
    for(i=0;i<r;i++){
        for( j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }

    for(i=0;i<r;i++){
        if(i%2==0){
            sort(arr[i],arr[i]+c);
        }
        else{
            sort(arr[i],arr[i]+c,greater<int>());
        }

        }
        cout<<"After swapping"<<endl;
    for(i=0;i<r;i++){
        for( j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    }
