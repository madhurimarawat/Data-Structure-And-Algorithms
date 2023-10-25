#include<iostream>
using namespace std;

/*

C++ Program to print half pyramid with space in reverse

For n = 4

* * * *
  * * *
    * *
      *

*/

int main(){

    int n,s;

    cout<<"Enter Number of Rows: ";
    cin>>n;

    for(int i = 0; i < n; i++){

        for (s = 1; s <= i; s++){
            cout<<"  ";
        }

    for(int j = n; j > i; j--){

        cout<<("* ");
    }

cout<<("\n");

}
return 0;
}