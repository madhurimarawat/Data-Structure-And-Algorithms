#include<iostream>
using namespace std;

/*

For r = 7

*                         *
* *                     * *
* * *                 * * *
* * * *             * * * *
* * * * *         * * * * *
* * * * * *     * * * * * *
* * * * * * * * * * * * * *
* * * * * * * * * * * * * *
* * * * * *     * * * * * *
* * * * *         * * * * *
* * * *             * * * *
* * *                 * * *
* *                     * *
*                         *


*/

int main(){

    int i,j,s,r;

    cout<<"Enter Number of Rows: ";
    cin>>r;

    // Printing Butterfly wings pattern

    // For Upper Pattern
    for(i = 1; i<= r ; i++){

        // For First Pattern
        for(j=0; j <i ; j++){
            cout<<"* ";
        }

        // For Space
        for(s = 2*r -i; s > i ; s--){
            cout<<"  ";
        }

         // For Second Pattern
        for(j = 0; j < i; j++){
            cout<<"* ";
        }


        cout<<endl;
    }

    // For Lower Pattern
    for(i = r; i > 0 ; i--){

        // For First Pattern
        for(j = i; j > 0; j--){
            cout<<"* ";
        }

        // For Space
        for(s = i; s < 2*r - i; s++){
            cout<<"  ";
        }

        // For Second Pattern
        for(j = i; j > 0; j--){
            cout<<"* ";
        }


        cout<<endl;
    }

    return 0;
}