// Program for Array Functions in C++
// Reversing Array Using Indexing

#include<iostream>
using namespace std;

int main(){

// Printing Statement
cout<<"Reversing Array Using Indexing"<<endl;

// Declaring Array
int arr[] = {1,2,3,0,0,1,1,-1,-2};

// Declaring Variables
int n = 9;
int i = 0;

// We will initialize an array with the Same size as that of original array so that we can store the reversed array
int reversed_arr[n];

// Printing Array
// We cannot print array directly we need to use a loop
cout<<"Array is: ";
for(i = 0; i < n; i++){
    cout<<arr[i]<<" ";
}

// Reversing array using a loop and storing element in new variable
// This is done using indexing
// Index n-1-i is used to get first index of array as loop is decrementing
for (int i = n-1; i >= 0; i--){
    reversed_arr[n-1-i] = arr[i];
    }

cout<<"\nReversed Array is: "<<endl;
for(int i = 0; i < n; i++){
    cout<<reversed_arr[i]<<" ";
}

return 0;
}