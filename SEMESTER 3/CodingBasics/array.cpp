// #include<bits/stdc++.h>
// using namespace std;
// int  main(){
//     int arr[]={2,5,67,3,-23,546,0};
//     int smallest=INT_MAX;
//     int largest=INT_MIN;
//     int ind_larg,ind_smal;
//     for(int i=0;i<sizeof(arr)/sizeof(int);i++){
//         largest=max(arr[i],largest);
//         ind_larg=i;
//         smallest=min(arr[i],smallest);
//         ind_smal=i;}
//         cout<<"Largest value in the array is : "<<largest<<" at position "<<ind_larg<<endl;
//         cout<<"Smallest value in the array is : "<<smallest<<" at position "<<ind_smal<<endl;

// }

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

/*What is an array?? - is a linear ds, has collection of elements of same data type, stored in contiguous memory locations 
Why do require an array??  - to store multiple values in a single variable

*/
//check if the number is the power of 2 or not
#include<iostream>
#include <cmath>
using namespace std;

int main(){
  int n;
  cout<<"Enter a number: ";
  cin>>n;
  // double intpart;
  // double isPower=log2(n);
  // double fracpart=modf(isPower,&intpart);
  // cout<<"Integral part "<<intpart<<endl;
  // cout<<"Fractional part "<<fracpart<<endl;

  // if(fracpart==0.0)
  if(n & -n == n)
    cout<<n<<" is a power of 2";
  else
    cout<<n<<" is not a power of 2";
}

//REVERSE THE ARRAY
/*   6          2         3          4         5  
  start                                       end

  Algo:
  ->swap(start,end)
  ->start++, end--
  ->terminating condition if(start>end)
 */

// #include <iostream>
// using namespace std;

// void reverse(int arr[],int n){
//   int start =0, end=n-1;
//   while(start<=end){
//     swap(arr[start],arr[end]);
//     start++;
//     end--;
//   }
// }

// void print(int arr[],int n){
//   for(int i=0;i<n;i++)
//   cout<<arr[i]<<" ";
// }
// int main(){
//   int arr[6]={1,4,7,-2,6,15};
//   reverse(arr,6);
//   print(arr,6);
// }


//Unique elements
// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main(){
//   int arr[13]={1,2,1,3,2,6,3,1,3,2,4,3,1};
//   sort(arr,arr+13);
//   for(int i=0;i<13;i++){
//       if(arr[i]!=arr[i+1]){
//          cout<<arr[i]<<" ";
         
//          }
//     }
  
//   return 0;
//   }

