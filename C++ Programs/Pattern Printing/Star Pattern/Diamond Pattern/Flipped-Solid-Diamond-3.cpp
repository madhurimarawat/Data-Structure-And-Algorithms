#include<iostream>
using namespace std;

/*

For r = 6

* * * * * * * * * * * * * * *
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
* * * * * * * * * * * * * * *

*/

int main(){

    int r, i, j,k,l, s;

    cout<<"Enter the number of Rows: ";
    cin>>r;

    // For upper Half
    for( i = r+1; i>=0; i--){

        // For all other rows
        if(i != r+1){
        for( j = i ; j>=0;j--){
            cout<<"* ";
        } }

        // For first row so that pattern is symmetric we need one star less than all other rows
        else{
            for( j = i-1 ; j>=0;j--){
            cout<<"* ";
        }
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
    for( i = 0; i<=r+1; i++){

        for( j=i ; j>=0;j--){
            cout<<"* ";
        }

        // For Space
        for(s = 0; s <= (2*(r-i)) ; s++){
            cout<<"  ";
        } 

        //  For all other rows 
        if(i != r+1 ){

        for( j = i ; j >= 0;j--){
                cout<<"* ";
        } }

        // For last row so that pattern is symmetric we need one star less than all other rows
        else{
            for( j = i ; j > 0;j--){
                cout<<"* ";
        }
        }

        cout<<endl;
    }

    return 0;
}