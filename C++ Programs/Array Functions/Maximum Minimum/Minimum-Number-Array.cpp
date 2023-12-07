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

// Min we would take as first element of array and then we would use it for comparison
/// If Array contains all positive number it will still find the correct number
// In case of 0 it will print 0 as minimum number even if it will not be present in Array
// So this will ensure that minimum number will be from Array
int i = 0, min = arr[0] ;

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