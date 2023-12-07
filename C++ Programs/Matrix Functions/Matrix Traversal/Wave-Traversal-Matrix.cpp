// Program for Matrix in C++
// Traversing Matrix in Wave Form

#include<iostream>
using namespace std;

int main(){

// Printing Statement
cout<<"Wave Traversal in Matrix"<<endl;


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

cout<<"\nMatrix is:\n";
// Printing Matrix
for(i=0; i <r ; i++){
    for(j = 0 ; j<c; j++){
        cout<<mat[i][j]<<"  ";
    }
    cout<<endl;
}


cout<<"\nWave Traversal of Matrix is:\n";

// Traversing Matrix in Wave Form

// Variable j is for Columns and i is for Rows
for(j = 0; j < c ; j++){

        // For Even Columns
        if( j % 2 == 0){
            for(int i = 0; i < r; i++){
            cout<<mat[i][j]<<"  ";

        }

        }

        // For Odd Columns
        else{
            for(int i = r-1; i >= 0; i--){
            cout<<mat[i][j]<<"  ";

        }

        }

        cout<<endl;
        }


return 0;
}