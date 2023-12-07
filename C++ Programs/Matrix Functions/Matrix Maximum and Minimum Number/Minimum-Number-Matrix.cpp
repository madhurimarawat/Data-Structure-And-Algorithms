// Program for Matrix in C++
// Finding Minimum Number in Matrix

#include<iostream>
using namespace std;

int main(){

// Printing Statement
cout<<"Minimum Number in Matrix"<<endl;


// Declaring Variables
int i = 0, j = 0, r = 0, c =0, el = 1;

cout<<"Enter Number of Rows: ";
cin>>r;
cout<<"Enter Number of Columns: ";
cin>>c;

// Declaring Matrix of dimention r X c
int mat[r][c];

for( i = 0; i < r; i++){
    for(j = 0 ; j < c; j++){
        cout<<"Enter Element "<<el<<" : ";
        cin>>mat[i][j];
        el++;
    }
}

cout<<"\nMatrix is:\n"<<endl;
// Printing Matrix
for(i=0; i <r ; i++){
    for(j = 0 ; j<c; j++){
        cout<<mat[i][j]<<"  ";
    }
    cout<<endl;
}

// Finding Minimum Number
// Declaring First element as min so that we can use it for later comparison
/// If Matrix contains all positive number it will still find the correct number
// In case of 0 it will print 0 as minimum number even if it will not be present in Matrix
// So this will ensure that minimum number will be from Matrix
int min = mat[0][0];

// Variable j is for Columns and i is for Rows
for(i = 0; i < r; i++){
    for(j = 0; j < c; j++){

        if(mat[i][j] < min){
            min = mat[i][j];
        }

    }
}

cout<<"\nMinimum Number in Matrix is: "<<min;

return 0;
}