/*Write a program in CPP to replace every element with greatest element present on the right side of that element and last element with -1.*/


#include <iostream>
// #include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size";
    cin >> n;
    int arr[n];
    cout << "Enter the elements";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max;
    for (int i = 0; i < n - 1; i++)
    {
        max = arr[i + 1];
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > max)
                max = arr[j];
        }
        arr[i] = max;
    }

    arr[n - 1] = -1;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}
