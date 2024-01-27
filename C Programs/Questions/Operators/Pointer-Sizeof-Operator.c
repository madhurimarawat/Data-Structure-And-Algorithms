/*

Question: Find the Output of The following Code

#include <stdio.h>

int main()
{
    char *p;
    printf("%d %d", sizeof(*p), sizeof(p));
    return 0;
}

1. 1 1
2. 1 8
3. 2 1
4. 2 2

Correct Answer: 2. 1 8

*/

#include <stdio.h>

int main()
{
    // Creating Character Pointer
    char *p;

    // Printing Size of Character and Character Pointer
    printf("%d %d", sizeof(*p), sizeof(p));

    return 0;
}

/*

This C code is used to print the size of a character and the size of a character pointer. Here's how it works:

1. `char *p;` This line declares a pointer to a character. The pointer `p` itself doesn't have a value yet, but 
it's set up to point to a character.


2. `printf("%d %d", sizeof(*p), sizeof(p));` This line prints out two numbers. The first number is the result of 
`sizeof(*p)`, which gives the size of the character that `p` points to. Since `p` is a character pointer, `*p` is 
a character, and the size of a character is 1 byte in C. So `sizeof(*p)` will return 1.


The second number is the result of `sizeof(p)`, which gives the size of the pointer `p`. The size of a pointer 
depends on the system the code is running on. On a 32-bit system, pointers are 4 bytes, and on a 64-bit system, 
pointers are 8 bytes. So `sizeof(p)` will return 4 or 8 depending on your system.

So, the output of this code will be "1 4" on a 32-bit system and "1 8" on a 64-bit system. 

*/