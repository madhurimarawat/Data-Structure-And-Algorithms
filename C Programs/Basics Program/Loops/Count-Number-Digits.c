// Count the number of digits in a number

/*

First we will traverse the number and increment the count 
of count variable.

*/

#include<stdio.h>
#include<math.h>

int countDigits(int number){

    int count = 0;

    number = fabs(number);

    while(number != 0){

        count++;

        number /= 10;
    }

    return count;
}

// Main Function
int main(){

    int num;

    printf("Enter a Number: ");
    scanf("%d", &num);

    // Calling Function
    printf("Number of Digits in number %d is: %d", num, countDigits(num));

    return 0;
}