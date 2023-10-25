#include<iostream>
using namespace std;

/*

For r = 6

*****  *****
****    ****
***      ***
**        **
*          *
*          *
**        **
***      ***
****    ****
*****  *****

*/

int main(){

    int r, i, j,k,l, s;

    cout<<"Enter the number of Rows: ";
    cin>>r;

    for (i = 0; i <= r; i++) {
    
        for (j = 0; j < r-i-1; j++) {
            cout<<"*";
        }

        // For double space
        for(k = 0; k < i+1 ; k++){
            cout<<"  ";
        }

        for (l = 0; l < r-i-1; l++) {
            cout<<"*";
        }

if(i < r-2){
        cout<<"\n"; }
    }

    for (i = 0; i < r; i++) {

    for (j = 0; j < i; j++) {
            cout<<"*";
        }

    for(k = r; k>i; k--){
        
        cout<<"  "; 
    }

    for (l = 0; l < i; l++) {
            cout<<"*";
        }

        cout<<endl;
    }

    return 0;
}