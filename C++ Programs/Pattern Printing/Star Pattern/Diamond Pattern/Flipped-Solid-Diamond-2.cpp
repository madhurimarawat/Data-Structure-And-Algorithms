#include<iostream>
using namespace std;

/*

For r = 6

* * * * * * *   * * * * * * *
* * * * * *       * * * * * *
* * * * *           * * * * *
* * * *               * * * *
* * *                   * * *
* *                       * *
*                           *
*                           *
* *                       * *
* * *                   * * *
* * * *               * * * *
* * * * *           * * * * *
* * * * * *       * * * * * *
* * * * * * *   * * * * * * *

*/

int main(){

    int r, i, j,k,l, s;

    cout<<"Enter the number of Rows: ";
    cin>>r;

    // For upper Half
    for( i = r; i>=0; i--){

        for( j = i ; j>=0;j--){
            cout<<"* ";
        }

        // For Space
        for(s = 0; s <= (2*(r-i)) ; s++){
            cout<<"  ";
        } 

        for( j=i ; j>=0;j--){
            cout<<"* ";
        } 

        cout<<endl;
    }

    // For lower Half
    for( i = 0; i<=r; i++){

        for( j=i ; j>=0;j--){
            cout<<"* ";
        }

        // For Space
        for(s = 0; s <= (2*(r-i)) ; s++){
            cout<<"  ";
        } 

        for( j = i ; j >= 0;j--){
                cout<<"* ";
        } 

        cout<<endl;
    }

    return 0;
}