// Program for Array Functions in C++
// Finding Maximum Number in Array

#include<iostream>
using namespace std;

int main(){

// Printing Statement
cout<<"Maximum Number in Array"<<endl;

// Declaring Array
int arr[] = {1,2,3,0,0,1,1};

// Declaring Variables
int n = 7;
int i = 0;

// Printing Array
// We cannot print array directly we need to use a loop
cout<<"Array is: ";
for(i = 0; i < n; i++){
    cout<<arr[i]<<" ";
}

// Finding Maximum Number using a loop
// We will initialize max as first number of Array so that
// If Array contains  all negative number it will still find the correct number
// In case of 0 it will print 0 as maximum number even if it will not be present in Array
// So this will ensure that maximum number will be from Array
int max = arr[0];

for (int i =0; i<n;i++){
    if(arr[i] > max){
        max = arr[i];
    }
}
cout<<"\nMaximum Number in Array is: "<<max<<endl;

return 0;
}