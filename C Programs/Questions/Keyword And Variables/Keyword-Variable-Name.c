/*

Question: Find the Output of The following Code

#include <stdio.h>

#define scanf "%s CSVTU Internship Test "

int main() {
printf(scanf, scanf);
getchar();
return 0;
}

1. Syntax Error
2. Exception
3. CSVTU Internship Test
4. %s CSVTU Internship Test CSVTU Internship Test


Correct Answer: 4. %s CSVTU Internship Test CSVTU Internship Test

*/

// Including Header Files
#include<stdio.h>

// Defining a string literal as constant with keyword name
#define scanf "%s CSVTU Internship Test"

// Main Function
int main(){

    printf(scanf, scanf);

    getchar();

    return 0;

}

/*
Output is:

%s CSVTU Internship Test CSVTU Internship Test

1. printf(scanf, scanf);

This line uses the printf function to print a formatted string. The format string is provided by the scanf macro.
The %s in the format string is a placeholder for a string, and it will be replaced by the actual string provided
as the second argument to printf. 

2.getchar();

In this case, the second argument is also scanf, so the output will contain two copies of the string.

This line uses the getchar function to wait for the user to press a key.
It reads a single character from the standard input (keyboard) and doesn't do anything with it.
This essentially allows the user to see the output before the program exits.

*/