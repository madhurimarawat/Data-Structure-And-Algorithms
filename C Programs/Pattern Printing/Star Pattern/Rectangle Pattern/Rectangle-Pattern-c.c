#include<stdio.h>

// C Program for Printing Rectangle Pattern with number of stars and rows as input
/*
* * * * *
* * * * *
* * * * *
*/

void main(){

    // Taking rows number as input
    int n,s;

    printf("Enter Number of Rows: ");
    scanf("%d", &n);

    printf("Enter Number of Stars: ");
    scanf("%d", &s);

    for(int i = 0; i<n;i++){
    for(int j =0; j<s; j++){
    printf("* ");
    }
    printf("\n");
}
}