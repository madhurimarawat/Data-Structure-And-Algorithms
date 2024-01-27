/*

Question: Find the Output of The following Code

#include <stdio.h>

void fun(int *p)
{
    static int q = 10;
    p = &q;
}
int main()
{
    int r = 20;
    int *p = &r;
    fun(p);
    printf("%d", *p);
    getchar();
    return 0;
}

1. 20
2. Exception
3. 10
4. Syntax Error

Correct Answer: 1. 20

*/

#include <stdio.h>

// Function for Pointer
void fun(int *p)
{
    // Declaring static variable
    static int q = 10;

    // Storing address of q in p
    p = &q;
}

int main()
{
    // Creating a variable
    int r = 20;

    // Making a integer Pointer
    int *p = &r;

    // Calling Function
    fun(p);

    // Printing value of pointer
    printf("%d", *p);

    getchar();

    return 0;
}

/*

This C code is a bit tricky because it involves pointers. Here's how it works:

1. The `main` function defines an integer `r` with the value 20.


2. It then creates a pointer `p` and sets it to point to `r`.


3. The `fun` function is called, passing `p` as an argument.


4. Inside `fun`, a static integer `q` is defined with the value 10. 
The pointer `p` is then set to point to `q`. However, this does not change the 
original pointer `p` in the `main` function, because `p` is passed by value to `fun`. 
This means that a copy of `p` is created for use inside `fun`, and any changes to `p` 
inside `fun` do not affect the original `p` in `main`.


5. Back in the `main` function, the value pointed to by `p` is printed out using `printf`. 
Since `p` still points to `r`, and the value of `r` is 20, the output of this code will be 20.

6. The `getchar` function is used to wait for a character input before the program ends. 
This is often used in Windows to prevent the console window from closing immediately.

So, despite the function `fun` seemingly changing what `p` points to, the value printed is 
still 20, because `p` in `main` is not affected by what happens to `p` in `fun`.

*/