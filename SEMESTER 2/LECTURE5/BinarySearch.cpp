#include<iostream>
//#include<bits/stdc++.h> 
using namespace std;

int binarySearch(int arr[], int l, int r, int x) {
    while (l <= r) {
        int mid = (l + r) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return -1;
}

int main(){
    int n,i,j;
    cout<<"Enter the size\n";
    cin>>n;
    int arr[n],key;
    cout<<"Enter the elements in increasing order\n";
    for ( i = 0; i < n; i++)
        cin>>arr[i];
    cout<<"Enter the element to be searched\n";
    cin>>key;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            cout<<"Binary search could not be implemented";
            return 0;
        }
    }

    int result = binarySearch(arr, 0, n - 1, key);
    
    if (result == -1) {
      cout<<"Element does not exist";
    } else {
      cout<<"Element found at index: "<<result+1<<endl;
    }
    return 0;
}
