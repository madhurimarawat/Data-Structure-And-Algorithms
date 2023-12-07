// Program for Matrix in C++
// Traversing Matrix in this Form
/*
Matrix is:

1 2 3
4 5 6
7 8 9

Traversal is:
3 6 9
9 8 7
4 5 6

*/

#include<iostream>
using namespace std;

int main(){

// Printing Statement
cout<<"Custom Traversal in Matrix"<<endl;

// Declaring Variables
int i = 0, j = 0, r = 0, c = 0, el = 1, kh = 0;

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


cout<<"\nTraversal of Matrix is:\n"<<endl;

// Traversing Matrix in Custom Form

// Variable j is for Columns and i is for Rows
for(i = 0; i < r; i++){
    
    // For First Row
    if (i == 0){

        // We Print Last Column
        for(int k = 0; k < r; k++){
        j = c-1;
        cout<<mat[k][j]<<"  ";
        }
        cout<<endl;
    }

    // For Second Row
    else if (i == 1){
        // We Print Last Row
        int kl = r-1;
        for(int j = c-1; j >= 0; j--){
            cout<<mat[kl][j]<<"  ";
            }
            cout<<endl;
        
    }

    // For Last Row
    // We check this condition so that middle row is printed only once
    else if (kh != r/2){
        // We Print Middle Row
        kh = r/2 ;
        for(int j = 0; j < c; j++){
            cout<<mat[kh][j]<<"  ";
        }
        cout<<endl;
    }

}


return 0;
}