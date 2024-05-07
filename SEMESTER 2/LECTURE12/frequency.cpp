//  WAP in CPP to find frequency of each element in the given array

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements  : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int freq[n]={0},visited=-1,count;

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(int i=0;i<n;i++){    
            count =1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                freq[j]=visited;
            }     
        }
        if(freq[i] != visited)
            freq[i]=count;
    }

    cout<<"Frequency of array elements:\n";
    for (int i=0;i<n;i++){
        if(freq[i] != visited)
            cout<<"frequency of "<<arr[i]<<" is "<<freq[i]<<endl;
    }
}

/* OUTPUT :
Enter the number of elements  : 7
Enter the elements : 3 2 1 2 3 2 1
Frequency of array elements:
frequency of 1 is 2
frequency of 2 is 3
frequency of 3 is 2    */

