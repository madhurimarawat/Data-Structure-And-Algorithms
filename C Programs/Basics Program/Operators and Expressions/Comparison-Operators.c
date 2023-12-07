// Program to see how compiler treats variables for Comparison Operator
#include<stdio.h>

// Main Function
int main(){

    // Declaring Integer and Character Variable
    int i;
    char c;

    // Checking if condition for i(Integer)
    // It will return False(0) always because compiler will initialize a garbage value
    // Here we are only checking for Comparison Operator
    if(i == 90){
        printf("If Block Condition Executed");
    }
    else{
        printf("Else Block Executed Because we are comparing with Value.");
        printf("\nCompiler Returns False Because we are comparing with a value and haven't initialized any value so it be default initialize with Garbage Value.");
    }

    // Checking if condition for c(Char) Empty Char '\0' - It will Return True
    // It will return False(0) if we will compare it with any other string 
    // Because compiler will initialize an empty string to an uninitialized variable
    // Here we are checking for Comparison Operator
    if(c == 'L'){
        printf("\nIf Block Condition Executed");
    }
    else{
        printf("\nElse Block Executed Because we are comparing with Value.");
        printf("\nCompiler Returns False Because we are comparing with a value and haven't initialized any value so By default null character is assigned.");
    }


}