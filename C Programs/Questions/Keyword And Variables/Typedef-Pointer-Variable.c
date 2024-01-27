/*

Question: Find the Output of The following Code

#include <stdio.h>
 int main() {
    typedef int *i;
    int j = 10;
    i *a = &j;
    printf("%d", **a);
    getchar();
    return 0;
 }

1. Exception
2. Syntax Error
3. 10
4. None of the above

Correct Answer: 2. Syntax Error

*/

#include <stdio.h>

int main()
{
    typedef int *i;

    int j = 10;
    i *a = &j;

    printf("%d", **a);
    getchar();

    return 0;
}

/*

Syntax Error:

Typedef-Pointer-Variable.c: In function 'main':
Typedef-Pointer-Variable.c:30:12: warning: initialization from incompatible pointer type [-Wincompatible-pointer-types]
     i *a = &j;
            ^


This code will cause a compile-time warning due to incompatible pointer types
in the line `i *a = &j;`. 
This is essentially a syntax error as we're trying to assign an `int*` to an `int**`. 
The types are incompatible, hence the warning. 

i *a = &j;

This line is trying to declare a as a pointer to a pointer to an integer (int**), and assign it the address of j. 
However, &j is a pointer to an integer (int*), 
not a pointer to a pointer to an integer (int**). 
This is why we’re getting a warning or error.
 
If we want `a` to be a pointer to `j`, we should declare `a` as `i a = &j;`. 
This way, `a` is of type `int*`, which is compatible with `&j`.

*/