//write a program in cpp to print a pattern that looks like a butterfly

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of width of triangle: ";
    cin >> n;
    
    // Upper part of the butterfly
    for(int i = 0; i < n; i++) {
        // Print stars for left side
        for(int j = 0; j <=i; j++)
            cout << "* ";

        // Print spaces for gap
        for(int k = 0; k < 2 * (n - i - 1) -1 ; k++)
            cout << "  ";

        // Print stars for right side
        for(int j = 0; n-1!=i ? j <= i : j<i ; j++) {
                cout << "* ";
        }

        cout << endl;
    }

    // Lower part of the butterfly
    for(int i = n - 2; i >= 0; i--) {
        // Print stars for left side
        for(int j = 0; j <= i; j++)
            cout << "* ";

        // Print spaces for gap
        
        for(int k = 0; k < 2 * (n - i - 1) - 1; k++)
            cout << "  ";

        // Print stars for right side
        for(int j = 0; j <= i; j++) {
            
                cout << "* ";
        }

        cout << endl;
    }

    return 0;
}
