/*

Question: Find the Output of The following Code

#include <stdio.h>

int main(void)
{
    printf("%d", printf("Welcome to CSVTU"));
    return 0;
}

1. Syntax Error
2. Welcome to CSVTU
3. Welcome to CSVTU16
4. 16

Correct Answer: 3. Welcome to CSVTU16

*/

#include <stdio.h>

int main(void)
{
    // Printing Value inside printf
    printf("%d", printf("Welcome to CSVTU"));

    return 0;
}

/*

This C code involves the use of nested `printf` statements. Here's how it works:

1. `printf("Welcome to CSVTU");` This inner `printf` statement prints the string 
"Welcome to CSVTU" to the standard output (usually your screen). The `printf` 
function returns the number of characters it successfully printed¹. So, this 
statement will print "Welcome to CSVTU" and then return 16, which is the number 
of characters in the string (including spaces).


2. `printf("%d", printf("Welcome to CSVTU"));` The outer `printf` statement takes 
the return value of the inner `printf` statement (which is 16) and prints it. So, 
this statement will print "16" to the standard output.


So, when you run this code, you'll see "Welcome to CSVTU16" printed to the standard output. 
The string "Welcome to CSVTU" comes from the inner `printf`, and the "16" comes from the outer `printf`.

*/