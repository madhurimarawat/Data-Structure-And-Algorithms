// Program for Array Functions in C++
// Counting the occurence of 0 and 1 in Array

#include<iostream>
using namespace std;

int main(){

// Printing Statement
cout<<"Counting the Occurence of 0 and 1 in Pre-Defined Array"<<endl;

// Declaring Array
int arr1[] = {1,2,3,0,0,1,1};

// Declaring Variables
int n1 = 7;
int i = 0, c01 = 0 ,c11 = 0;

// Printing Array
// We cannot print array directly we need to use a loop
cout<<"Array is: ";
for(i = 0; i < n1; i++){
    cout<<arr1[i]<<" ";
}


// Loop to Iterate and Count Element of Array
for(i = 0; i< n1; i++){
    if (arr1[i] == 0){
        c01++;
    }
    else if(arr1[i] == 1){
        c11++;
    }
}
cout<<"\n\nCount of 0 in Array is: "<<c01<<endl;
cout<<"Count of 1 in Array is: "<<c11<<endl;

// Taking User Input
int n2 = 0, c02 = 0, c12 = 0;


cout<<"\nTaking User Input"<<endl;
cout<<"Enter the Number of Elements: ";
cin>>n2;

int arr2[n2];

// Taking Input
for( i = 0; i < n2; i++){
    cout<<"Enter Element "<<i+1<<": ";
    cin>>arr2[i];
}

// Printing Statement
cout<<"\nCounting the Occurence of 0 and 1 in User Input Array"<<endl;

// Loop to Iterate and Count Element of Array
for(i = 0; i< n1; i++){
    if (arr2[i] == 0){
        c02++;
    }
    else if(arr2[i] == 1){
        c12++;
    }
}
cout<<"Count of 0 in Array is: "<<c02<<endl;
cout<<"Count of 1 in Array is: "<<c12<<endl;

return 0;
}