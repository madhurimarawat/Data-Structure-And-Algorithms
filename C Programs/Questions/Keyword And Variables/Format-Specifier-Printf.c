/*

Question: Find the Output of The following Code

#include <stdio.h>

int main()
{
    printf("%m");
    return 0;
}

1. Success
2. Compilation Error
3. %m
4. None of the above

Correct Answer: 4. None of the above

*/

#include <stdio.h>

int main()
{
    // Printing Value
    printf("%m");

    return 0;
}

/*

The `%m` format specifier is not standard in C and its behavior can 
vary between different systems and compilers. In standard C, unrecognized 
format specifiers are typically ignored, and the characters are printed as-is. 

So, `printf("%m");` would indeed simply print "m" on systems that don't recognize 
`%m` as a special format specifier.

*/