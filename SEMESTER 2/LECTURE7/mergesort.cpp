#include<iostream>
#include "mergesort.h"
#include "merge.h"

using namespace std;
using namespace Merge;

namespace MergeSort
{
    void mergesort(int A[], int low, int high)
    {
    int mid; 
    if(low<high)
    {
        mid = (low + high) /2;
        mergesort(A, low, mid);
        mergesort(A, mid+1, high);
        merge(A, mid, low, high);
    }
    } 
}
