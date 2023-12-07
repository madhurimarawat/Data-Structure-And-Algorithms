#include<iostream>
using namespace std;

// C++ Program for Printing Rectangle Pattern with number of stars and rows as input
/*
* * * * *
* * * * *
* * * * *
*/

int main(){

    // Taking rows number as input
    int n,s;

    cout<<"Enter Number of Rows: ";
    cin>>n;

    cout<<"Enter Number of Stars: ";
    cin>>s;
    for(int i = 0; i<n;i++){
    for(int j =0; j<s; j++){
    printf("* ");
    }
    printf("\n");
}

    return 0;
}