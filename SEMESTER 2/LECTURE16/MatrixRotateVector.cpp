//WAP in CPP to rotate a matrix using vectors
#include<iostream>
#include<vector>
#include<utility>
using namespace std;
int main() { 
    int n;
    cout<<"Enter the size : ";
    cin>>n;
    vector<vector<int>>matrix(n,vector<int>(n));
    vector<vector<int>>mat(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"Enter value for matrix at ["<<i<<"]["<<j<<"] : ";
            cin>>matrix[i][j];

        }
    }
    printf("\nMatrix after 90 degree rotation\n");
    for (int i=0;i<=n-1;i++){
        for (int j=n-1;j>=0;j--){
           cout<<matrix[j][i]<<" ";
            mat[i][j]=matrix[j][i];
        }
        cout<<endl;
    }
return 0;
}
/*OUTPUT
Enter the size : 3
Enter value for matrix at [0][0] : 1
Enter value for matrix at [0][1] : 2
Enter value for matrix at [0][2] : 3
Enter value for matrix at [1][0] : 4
Enter value for matrix at [1][1] : 5
Enter value for matrix at [1][2] : 6
Enter value for matrix at [2][0] : 7
Enter value for matrix at [2][1] : 8
Enter value for matrix at [2][2] : 9

Matrix after 90 degree rotation
7 4 1
8 5 2
9 6 3   */