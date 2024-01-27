/*

Question: Find the Output of The following Code

#include <stdio.h>

int main()
{
    const int *p = &5;
    printf("%d", ++(*p));
    return 0;
}

1. 5
2. 6
3. Garbage Value
4. Syntax Error

Correct Answer: 4. Syntax Error

*/

#include <stdio.h>

int main()
{
    // Declaring Constant Pointer
    const int *p = &5;

    // Printing Incremented value of p
    printf("%d", ++(*p));

    return 0;
}

/*

Pointer-Increment-Decrement-Variable.c: In function 'main':
Pointer-Increment-Decrement-Variable.c:28:20: error: lvalue required as unary '&' operand
     const int *p = &5;
                    ^
Pointer-Increment-Decrement-Variable.c:31:18: error: increment of read-only location '*p'
     printf("%d", ++(*p));
                  ^~

The code is trying to do two things that are not allowed in C:

1. `const int *p = &5;` This line is trying to take the address of an integer constant (`5`), 
which is not allowed. In C, you can only take the address of variables, not constants or expressions.


2. `printf("%d", ++(*p));` This line is trying to increment a `const int`. The `const` keyword means 
that the value of the variable cannot be changed after it is set. Trying to increment a `const int` 
will result in a compile error.

So, the code will not compile due to these two errors. If you want to create a pointer to a constant 
integer.              

*/