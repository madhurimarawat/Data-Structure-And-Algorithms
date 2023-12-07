// Program for Array Functions in C++
// Printing Extremes in Array Using Indexing

#include<iostream>
using namespace std;

int main(){

// Printing Statement
cout<<"Printing Extremes Number from Different Ends Using Indexing in Array"<<endl;

// Declaring Array
int arr[] = {1,2,3,0,1,0,1,1,8};

// Declaring Variables
int n = 9;
int i = 0;

// Printing Array
// We cannot print array directly we need to use a loop
cout<<"Array is: ";
for(i = 0; i < n; i++){
    cout<<arr[i]<<" ";
}

cout<<"\nExtreme Values in Array are:"<<endl;
// Using Indexing at first and last index
for(i = 0; i<n; i++){

    // When n is even it will print in two two pairs and terminate 
    // When n is odd middle element will be printed twice
     if( n-1-i >= i){
        cout<<arr[i]<<" ";
        cout<<arr[n-1 - i]<<endl; }

}

return 0;
}