/*

Question: Find the Output of The following Code

#include <stdio.h>

void fun(int **p)
{
    static int q = 10;
    *p = &q;
}
int main()
{
    int r = 20;

    int *p = &r;

    fun(&p);

    printf("%d", *p);
    getchar();
    return 0;
}

1. 20
2. 10
3. Syntax Error
4. Exception

Correct Answer: 2. 10

*/

#include <stdio.h>

void fun(int **p)
{
    static int q = 10;
    *p = &q;
}
int main()
{
    int r = 20;

    int *p = &r;

    fun(&p);

    printf("%d", *p);

    getchar();

    return 0;
}

/*

This C code involves pointers to pointers, which can be a bit tricky. Here's how it works:

1. The `main` function defines an integer `r` with the value 20.


2. It then creates a pointer `p` and sets it to point to `r`.


3. The `fun` function is called, passing the address of `p` as an argument. 
This is why `fun` takes a double pointer `int **p` as its parameter.


4. Inside `fun`, a static integer `q` is defined with the value 10. 
The pointer `*p` (which is the original `p` from `main`) is then set to point to `q`. 
This does change the original pointer `p` in the `main` function, 
because `p`'s address (not its value) was passed to `fun`.


5. Back in the `main` function, the value pointed to by `p` is printed out using `printf`. 
Since `p` now points to `q`, and the value of `q` is 10, the output of this code will be 10.


6. The `getchar` function is used to wait for a character input before the program ends. 
This is often used in Windows to prevent the console window from closing immediately.

So, the function `fun` changes what `p` points to, the value printed is now 10, because `p` in `main` is affected by what happens to `p` in `fun`. I hope this helps! 😊

*/