//WAP in CPP to find the total number of triangles possible

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
        int c=0;
        cout<<"TRIANGULAR PAIRS : "<<endl;
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if((arr[i]+arr[j])>arr[k]){
                    c++;
                cout<<arr[i]<<" , "<<arr[j]<<" , "<<arr[k]<<endl;
                }
            }   
        }
    }
    cout<<"Number of triangular pairs : "<<c;
}

/* OUTPUT :
Enter the size : 4
Enter the elements : 4 6 3 7
TRIANGULAR PAIRS : 
4 , 6 , 3
4 , 6 , 7
6 , 3 , 7
Number of triangular pairs : 3  */