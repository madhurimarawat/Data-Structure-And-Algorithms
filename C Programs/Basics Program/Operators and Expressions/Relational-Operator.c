// Program to See Relational operator
#include<stdio.h>

int main(){

    // Declaring and Inintializing variables
    int a = 30, b = 40, x;

    // First Condition will be returned 1(True) Same for Second ONe and x will be assigned 1
    // b will be reassigned as 50
    x = (a != 10) && (b = 50);

    printf("The Value of a is: %d\n", a);
    printf("The Value of b is: %d\n", b);
    printf("The Value of X is: %d\n", x);

    x = 10;
    int y = 5, p, q;

    // Since condition will be True 1 will be assigned 
    p = x > 9;

    // Since condition will be True 1 will be assigned
    q = x > 9 && y != 3;

    printf("The Value of p is %d and q is %d", p,q);

}