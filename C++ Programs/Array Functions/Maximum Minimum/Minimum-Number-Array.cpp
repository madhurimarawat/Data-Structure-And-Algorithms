// Program for Array Functions in C++
// Finding Minimum Number in Array

#include<iostream>
using namespace std;

int main(){

// Printing Statement
cout<<"Minimum Number in Array"<<endl;

// Declaring Array
int arr[] = {1,2,3,0,0,1,1,-1,-2};

// Declaring Variables
int n = 9;
int i = 0, min = 0 ;

// Printing Array
// We cannot print array directly we need to use a loop
cout<<"Array is: ";
for(i = 0; i < n; i++){
    cout<<arr[i]<<" ";
}

// Finding Minimum Number using a loop
for (int i =0; i<n;i++){
    if(arr[i] < min){
        min= arr[i];
    }
}
cout<<"\nMinimum Number in Array is: "<<min<<endl;

return 0;
}