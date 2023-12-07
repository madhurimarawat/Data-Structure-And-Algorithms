// Program to see how compiler treats variables for Assignment Operator
#include<stdio.h>

// Main Function
int main(){

    // Declaring Integer and Character Variable
    int i;
    char c;

    // It assigns garbage value to variable
    printf("The Value of Integer Variable i Before Condition is: %d\n", i);

    // It Assigns '\0' value to Variable
    // For char '\0' is assigned if we do not assign any value to Character Variable
    printf("The Value of Character Variable c Before Condition is: %c\n", c);

    // Checking if condition for i(Integer)
    // It will return True(1) always because compiler treats 
    // all Non-Zero Values as True
    // Here we are only checking for Assignment Operator and Not for Comparison
    if(i = 89){
        printf("If Block Condition Executed");
        printf("\nCompiler Returns True Because we are comparing with a Non-Zero Value and all Non-Zero Values are returned to True.");
    }
    else{
        printf("Else Block Executed Because we are comparing with Zero.");
    }

    // Checking if condition for c(Char) Empty Char '\0'
    // It will return True(1) always because compiler treats 
    // all Non-Empty Values as True
    // Here we are only checking for Assignment Operator and Not for Comparison
    if(c = 'I'){
        printf("\nIf Block Condition Executed");
        printf("\nCompiler Returns True Because we are comparing with a Non-Empty Char Value and all Non-Zero Values are returned to True.");
    }
    else{
        printf("\nElse Block Executed Because we are comparing with Empty Char.");
    }

    // If We print the value of i it will be printed as 89 or whatever non-zero value because it is sucessfully assigned
    // But for 0 it will execute else block and succesfully assign 0
    printf("\nThe Value of Integer Variable i After Condition is: %d\n", i);

    // If We print the value of i it will be printed as I or whatever character value because it is sucessfully assigned
    // But for '\0' it will execute else block and succesfully assign '\0'
    printf("The Value of Character Variable c After Condition is: %c", c);


}