// Program to see how compiler treats variables for Assignment Operator
#include<stdio.h>

// Main Function
int main(){

    // Declaring Integer Variable
    int a = 10, b = 5;

    printf("Original Value of a is %d and b is %d.\n\n", a, b);

    // Seeing for Logical AND &&
    // Checking if condition for a and b(Integer)
    // It will return True(1) always because compiler treats 
    // all Non-Zero Values as True
    // Here we are only checking for Assignment Operator
    // Since AND checks for False(0) condition
    // Till the Point it encounters False Condition it will run 
    // Hence b will get Reassigned as first condition will be True and AND will execute next condition
    if((a == 10) && (b = 90)){
        printf("If Block Executed");
    }
    else{
        printf("Else Block Executed");
    }

    // If We print the value of b it will be printed as 90 or whatever non-zero value because it is sucessfully assigned
    // But for 0 it will execute else block and successfully assign 0
    printf("\n\nLogical AND (Operator - &&)\n");
    printf("\nThe Value of Integer Variables a is %d and b is %d After Condition and Logical AND Execution.\n\n", a,b);

    // Seeing for Logical OR ||
    // Checking if condition for i(Integer)
    // It will return True(1) always because compiler treats 
    // all Non-Zero Values as True
    // Here we are only checking for Assignment Operator
    // Since OR checks for True(1) condition
    // Till the Point it encounters True(1)  Condition it will run 
    // Hence b will not get Reassigned as first condition will be True and AND will not execute next condition
    if((a == 10) || (b = 68)){
        printf("If Block Executed");
    }
    else{
        printf("Else Block Executed");
    }

    // If We print the value of b it will be printed as 90 or whatever non-zero value because it is sucessfully assigned
    // But for 0 it will execute else block and successfully assign 0
    printf("\n\nLogical OR (Operator - ||)\n");
    printf("\nThe Value of Integer Variables a is %d and b is %d After Condition and Logical OR Execution.\n", a,b);


}