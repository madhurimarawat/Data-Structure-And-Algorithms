// Program to Check what happen if we add additional element in scanf

#include<stdio.h>

int main(){

    // Declaring Variable
    int a;

    // Taking User Input
    printf("Enter Value for Variable: ");
    scanf("_97890765555%d", &a);

    // Printing Value of X
    // It will print any random value

    /* 

    Explanation: 

    The scanf function is expecting an integer input, but the format string
     "_97890765555%d" doesn't match this expectation. 
     As a result, the variable 'a' remains uninitialized and prints a random value.
     
      */

    printf("The Value of X is: %d\n", a);
}