/*

Question: Find the Output of The following Code

char *getString() {
char str[] = "Will | be printed?";
return str;

int main() {
printf("%s", getString());
getchar();
return 0;
}

1. Ibe printed?
2. Will! be printed?
3. Compilation Error
4. Some garbage value

Correct Answer: 3. Compilation Error

*/

#include<stdio.h>

// Making a pointer function
char *getString(){

    // Declaring Character array for string
    char str[] = "Will I be printed?";

    // Returning string
    return str;
}

// Main function
int main(){

    printf("%s", getString());
    getchar();
    return 0;
}

/*

Output will be Compilation error as we returning the address of a local variable
and also it is an array so we cannot directly return address like this.

*/