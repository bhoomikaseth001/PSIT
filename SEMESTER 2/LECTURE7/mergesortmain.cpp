#include<iostream>
#include"merge.h"
#include"mergesort.h"

using namespace std;
using namespace Merge;
using namespace MergeSort;

int main()
{
    int size;
    cout<<"Enter the number of elements"<<endl;
    cin>>size;
    
    int *A=new int[size];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<size;i++)
        cin>>A[i];
    cout<<endl;
    
    mergesort(A, 0, size-1);
    
    cout<<"Sorted Array";
    for(int i=0;i<size;i++)
        cout<<" "<<A[i];
    cout<<endl;
    return 0;
}
