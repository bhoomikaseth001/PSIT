#include<iostream>
#include<algorithm>
using namespace std;
template<typename B>
void Sort(B *arr,int r,int c);
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

    cout<<"After swapping"<<endl;
    for(i=0;i<r;i++){
        for( j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
    template<typename B>
    void Sort(B *arr,int r,int c){
        int i;
    for(i=0;i<r;i++){
        if(i%2==0){
            sort(arr[i],arr[i]+c);
        }
        else{
            sort(arr[i],arr[i]+c,greater<int>());
        }

        }
        
    }

    
