#include<bits/stdc++.h>
using namespace std;
int  main(){
    int arr[]={2,5,67,3,-23,546,0};
    int smallest=INT_MAX;
    int largest=INT_MIN;
    int ind_larg,ind_smal;
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        largest=max(arr[i],largest);
        // ind_larg=i;
        smallest=min(arr[i],smallest);
    }
        // ind_smal=i;
        cout<<"Largest value in the array is : "<<largest<<" at position "<<endl;
        cout<<"Smallest value in the array is : "<<smallest<<" at position "<<endl;

}

//REVERSE OF AN ARRAY
//Approach : TWO POINTERS APPROACH
//take two pointers ptr1=start index
 //                               ptr2 =last index
   //          terminal condition -> size=even : 4,5,6,7 : ptr1>ptr2 
     //                               size =odd : 4,5,6 : ptr1==ptr2
// #include<bits/stdc++.h>
// using namespace std;
// int Reverse_Array(int arr[],int size) {
//     int start=0;
//     int end=size-1;
//     while(start<end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }
//     int main(){
//         int arr[]={3,6,7,8,2};
//         int size=sizeof(arr)/sizeof(int);

//         Reverse_Array(arr,size);

//         for(int i=0;i<size;i++)
//         cout<<arr[i]<<" ";
//     }

