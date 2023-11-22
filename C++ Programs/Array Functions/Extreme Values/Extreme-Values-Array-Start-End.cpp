// Program for Array Functions in C++
// Printing Extremes in Array Using Start End Variables

#include<iostream>
using namespace std;

int main(){

// Printing Statement
cout<<"Printing Extremes Number from Different Ends Using Start End Variables in Array"<<endl;

// Declaring Array
int arr[] = {1,2,3,0,1,0,1,1,8};

// Declaring Variables
int n = 9;
int i = 0;

// Start and End Values
// Start is the Start value of array 
// End is the end value for array
int s = 0, e = n-1;

// Printing Array
// We cannot print array directly we need to use a loop
cout<<"Array is: ";
for(i = 0; i < n; i++){
    cout<<arr[i]<<" ";
}

cout<<"\nExtreme Values in Array are:"<<endl;
// Using Indexing at first and last index
for(s = 0; s < n; s++){

    // When n is even it will print in two two pairs and terminate 
    // When n is odd middle element will be printed twice
    if( e >= s){
        cout<<arr[s]<<" ";
        cout<<arr[e]<<endl; }
    e--;

}

return 0;
}