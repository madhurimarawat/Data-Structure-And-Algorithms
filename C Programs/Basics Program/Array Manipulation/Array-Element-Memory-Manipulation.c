// Program to check if we can manipulate memory address of array element

#include<stdio.h>

int main(){

    // Declaring Integer
    int arr[5] = {10,20,30,40,50};

    // Trying to increment element 3 i.e element at index 3
    // It will work
    printf("Incrementing Element at Index 3: %d\n", ++arr[3]);

    // Now Trying to increase memory address of Element at Index 3
    // It will give error and is not going to manipulate because array memory is predefined
    // Array memory address cannot be manipulated
    printf("Element Address at Index 3: %d\n", &arr[3]);
    // printf("Incrementing Element Address at Index 3: %d\n", ++(&arr[3]));

    /*
    This gives error
    
    Array-Element-Memory-Manipulation.c: In function 'main':
    Array-Element-Memory-Manipulation.c:17:61: error: lvalue required as increment operand
     printf("Incrementing Element Address at Index 3: %d\n", ++(&arr[3]));
                                                             ^~

    Memory address of array cannot be manipulated                                                         
                                                             */

    // If we want to increment the memory address we can store it in pointer than increase it
    // But it will not do any modification to original array
    int *ptr;

    // Points to memory address of array element, we can increment this
    ptr = &arr[3];

    // Increment happens of 4 bytes as integer size is 4 bytes
    printf("Incrementing Element Address at Index 3 Using Pointer: %d\n", ++ptr);


}