// Program to Find Size of array using sizeof Operator 
#include<stdio.h>

int main(){

    // Declaring an Array
    int arr[] = {12,45,34,56,78};

    printf("Size of Integer is: %d\n", sizeof(int));
    printf("Size Of Array is: %d\n", sizeof(arr));
    printf("Number of Elements in Array is: %d", sizeof(arr) / sizeof(int));
}