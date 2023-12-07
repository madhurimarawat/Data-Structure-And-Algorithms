#include <iostream>
using namespace std;

// C++ Program for Printing Rectangle Pattern with a specified number of stars and rows
/*
* * * * *
*       *
* * * * *
*/

int main() {
    // Taking rows and stars as input
    int r, s;

    cout<<"Enter Number of Rows: ";
    cin>>r;

    cout<<"Enter Number of Stars: ";
    cin>>s;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < s; j++) {
            if (i == 0 || i == r - 1 || j == 0 || j == s - 1) {
                cout<<"* ";
            } else {
                cout<<"  "; // Print spaces for the middle stars
            }
        }
        cout<<"\n";
    }

    return 0;
}
