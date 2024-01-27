/*

Question: Find the Output of The following Code

char *getString() {
char *str = "Nice test for strings";
return str;

int main() {
printf("%s", getString());
getchar();
return 0;
}

1. Nice test for strings
2. Nice test
3. Nice
4. Strings

Correct Answer: 1. Nice test for strings

*/

#include<stdio.h>

// Making a pointer function
char *getString(){

    // Declaring Pointer for string
    char *str = "Nice test for strings";

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

Output will be string as it is a pointer and we are referencing
it and printing the entiree string

*/