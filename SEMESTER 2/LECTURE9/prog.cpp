//WAP in CPP to insert an array of 'n' size and sort first k elements in ascending order and remaining 'n-k' in descending order

#include<iostream>
using namespace std;

int main(){
    int n,k,i,j;
    cout<<"Enter the size";
    cin>>n;
    cout<<"Enter the value of k";
    cin>>k;

   int arr[n];

    cout<<"Enter the elements \n";
    for ( i = 0; i < n; i++)
        cin>>arr[i];

    for(i=0;i<(n-k);i++)
    {
        for(j=0;j<(n-k)-i-1;j++)
        {        
                if(arr[j+1]<arr[j]){
                    int temp=arr[j];
		            arr[j]=arr[j+1];
		            arr[j+1]=temp;
                }
            }
        }

        for(i=0;i<n;i++)
        {
        for(j=k;j<n-i-1;j++)
        {        
                if(arr[j+1]>arr[j]){
                    int temp=arr[j];
		            arr[j]=arr[j+1];
		            arr[j+1]=temp;
                }
            }
        }

    for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
    cout<<endl;

}

/*
Output:
Enter the size 5
Enter the value of k 3
Enter the elements 
2 1 4 7 9 
1 2 4 9 7 
*/