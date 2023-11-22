// Program for Array Functions in C++
// Reversing Array Using Start End

#include<iostream>
using namespace std;

int main(){

// Printing Statement
cout<<"Reversing Array Using Start End"<<endl;

// Declaring Array
int arr[] = {1,2,3,0,0,1,1,-1,-2};

// Declaring Variables
int n = 9;

// Start and End Values
// Start is the Start value of array 
// End is the end value for array
int i = 0, s = 0, e = n-1;

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
// Index s is used to get first index of array while e is used to get reverse elements of original array
for (int s = 0; s  < n; s++){
    reversed_arr[s] = arr[e];
    e--;
    }

cout<<"\nReversed Array is: "<<endl;
for(int i = 0; i < n; i++){
    cout<<reversed_arr[i]<<" ";
}

return 0;
}