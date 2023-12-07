// Program for Array Functions in C++
// Finding Maximum Number in Array

#include<iostream>
using namespace std;

int main(){

// Printing Statement
cout<<"Maximum Number in Array"<<endl;

// Declaring Array
int arr[] = {1,2,3,6,7,8};

// Declaring Variables
int n = 6;
int i = 0;

// Printing Array
// We cannot print array directly we need to use a loop
cout<<"Array is: ";
for(i = 0; i < n; i++){
    cout<<arr[i]<<" ";
}

// Finding Minimum Pair Sum using a loop
// We will initialize max as sum of first number and second number of Array so that
// If Array contains  all negative number it will still find the correct number
// In case of 0 it will print 0 as maximum pair sum  even if it will not be present in Array
// So this will ensure that maximum pair sum will be from Array
int min = arr[0] + arr[1];

for (int i = 0; i < n;i++){

    if((arr[i] + arr[i+1]) < min){
        min = arr[i] + arr[i+1];
    }
}
cout<<"\nMinimum Pair Sum in Array is: "<<min<<endl;

return 0;
}