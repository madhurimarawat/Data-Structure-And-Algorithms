#include <iostream>
using namespace std;

/*
For r = 6

          *
        * * *
      * * * * *
    * * * * * * *
  * * * * * * * * *
* * * * * * * * * * *

*/

int main() {

 int r, i, j, s;

    cout<<"Enter the number of Rows: ";
    cin>>r;

    for (i = 1; i <= r; i++) {
        for (s = 1; s <= r - i; s++) {
            cout<<"  ";
        }

        // Instead of < we can take != as well 
        for (j = 0; j < 2 * i - 1; j++) {
            cout<<"* ";
        }

        cout<<"\n";
    }

    return 0;
}