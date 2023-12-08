// Program to Demonstrate if else and terminate else execution
// Our Task is to execute both if and else block by adding some symbol or anything
#include<stdio.h>

int main(){

    int a = 9;

    // Normally if will execute if block 
    // To make else block execute we will add semicolon after else
    // After this it will execute else block statement also
    // Another way is to add empty braces after else so that 
    // next statement will not be a part of else block and executed

    if(a == 9)
        printf("If Block Executed");
    
    else;
        printf("\nElse Block Executed");
    
}