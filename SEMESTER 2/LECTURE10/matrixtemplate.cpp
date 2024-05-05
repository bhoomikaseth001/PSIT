// #include<iostream>
// #include<algorithm>
// using namespace std;
// template<typename B>
// void Sort(B *arr,int r,int c);
// int main(){
//     int r,c,i,j,k;
//     cout<<"Enter the rows ";
//     cin>>r;
//     cout<<"Enter the columns ";
//     cin>>c;

//     int arr[r][c];

//     cout<<"Enter the elements: "<<endl;
//     for(i=0;i<r;i++){
//         for( j=0;j<c;j++){
//             cin>>arr[i][j];
//         }
//     }

//     cout<<"After swapping"<<endl;
//     for(i=0;i<r;i++){
//         for( j=0;j<c;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
//     template<typename B>
//     void Sort(B *arr,int r,int c){
//         int i;
//     for(i=0;i<r;i++){
//         if(i%2==0){
//             sort(arr[i],arr[i]+c);
//         }
//         else{
//             sort(arr[i],arr[i]+c,greater<int>());
//         }

//         }
        
//     }

    
#include<iostream>

using namespace std;
template<typename BS>

void swap(int r, int c, BS **arr){
    for(int i=0;i<r;i++){
        if(i%2==0){
            for(int j=0;j<c-1;j++){
        for(int k=0;k<c-j-1;k++){
        
                if(arr[i][k+1]<arr[i][k]){
                    BS temp=arr[i][k];
		            arr[i][k]=arr[i][k+1];
		            arr[i][k+1]=temp;
                }
            }
        }
    }
        else{
            for(int j=0;j<c-1;j++){
        for(int k=0;k<c-j-1;k++){
        
                if(arr[i][k+1]>arr[i][k]){
                    BS temp=arr[i][k];
		            arr[i][k]=arr[i][k+1];
		            arr[i][k+1]=temp;
                }
            }
        }
        }
}
}
int main(){
    int r,c,i,j;
    cout<<"Enter the rows ";
    cin>>r;
    cout<<"Enter the columns ";
    cin>>c;

     int **arr = new int *[r];
    for (int i = 0; i < r; i++) {
        arr[i] = new int[c];
    }


    
    
    cout<<"Enter the elements: "<<endl;
    for( i=0;i<r;i++){
        for( j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }

    swap(r,c,arr);

        cout<<"After swapping"<<endl;
    for(i=0;i<r;i++){
        for( j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    }

/*
Output:
Enter the rows 3
Enter the columns 3
Enter the elements: 
3 2 1  
1 2 3 
3 2 1
After swapping
1 2 3
3 2 1
1 2 3*/