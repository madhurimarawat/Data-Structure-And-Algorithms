#include<iostream>
using namespace std;

/*

C++ Program to print half pyramid with space 

For n = 4

      *
    * *
  * * *
* * * *

*/

int main(){

    int n,s;

    cout<<"Enter Number of Rows: ";
    cin>>n;

    for(int i = 0; i < n; i++){

        for (s = 0; s < n-i-1; s++){
            cout<<"  ";
        }

    for(int j = 0; j <= i; j++){

        cout<<("* ");
    }

cout<<("\n");

}
return 0;
}