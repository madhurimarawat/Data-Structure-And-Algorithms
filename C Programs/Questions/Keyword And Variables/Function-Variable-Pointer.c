/*

Question: Find the Output of The following Code

#include <stdio.h>

 int fun(int n, int *fg) {
    int t, f;
    if(n <= 1) {
        *fg = 1;
        return 1;
    }
    t = fun(n-1, fg);
    f = t + *fg;
    *fg = t;
    return f;
 }
 int main() {
    int x = 15;
    printf("%d\n", fun(5, &x));
    getchar();
    return 0;
 }

1. 6
2. 7
3. 8
4. 9

Correct Answer: 3. 8

*/

#include <stdio.h>
int fun(int n, int *fg)
{
    int t, f;

    if (n <= 1)
    {
        *fg = 1;
        return 1;
    }

    t = fun(n - 1, fg);

    f = t + *fg;

    *fg = t;

    return f;
}

int main()
{
    int x = 15;

    printf("%d\n", fun(5, &x));

    getchar();

    return 0;
}
/*

This code is implementing a recursive function that calculates the Fibonacci sequence.

1. The `main` function initializes `x` to 15 and then calls `fun(5, &x)`. 

The value of `x` doesn't matter because it gets overwritten in the `fun` function.

2. In the `fun` function, if `n` is less than or equal to 1, it sets the value 
pointed to by `fg` to 1 and returns 1. This is the base case for the recursion.

3. If `n` is greater than 1, it first calls `fun(n - 1, fg)`. 
This is a recursive call, which means it will keep calling `fun` with `n` decremented by 1 until `n` is 1.

4. Once the base case is reached and the recursion starts unwinding, 
`t` is set to the return value of `fun(n - 1, fg)`, and `f` is set to `t + *fg`.

5. Then `*fg` is set to `t`, and `f` is returned.

Let's trace the values for `fun(5, &x)`:

- `fun(5, &x)`: `n` is not less than or equal to 1, so it calls `fun(4, &x)`.
- `fun(4, &x)`: `n` is not less than or equal to 1, so it calls `fun(3, &x)`.
- `fun(3, &x)`: `n` is not less than or equal to 1, so it calls `fun(2, &x)`.
- `fun(2, &x)`: `n` is not less than or equal to 1, so it calls `fun(1, &x)`.
- `fun(1, &x)`: `n` is less than or equal to 1, so it sets `*fg` to 1 and returns 1.

- `fun(2, &x)`: Now `t` is set to 1 (the return value of `fun(1, &x)`), 
`f` is set to `1 + 1 = 2`, `*fg` is set to `t` (which is 1), and `f` (which is 2) is returned.


- `fun(3, &x)`: Now `t` is set to 2 (the return value of `fun(2, &x)`), 
`f` is set to `2 + 1 = 3`, `*fg` is set to `t` (which is 2), and `f` (which is 3) is returned.


- `fun(4, &x)`: Now `t` is set to 3 (the return value of `fun(3, &x)`), 
`f` is set to `3 + 2 = 5`, `*fg` is set to `t` (which is 3), and `f` (which is 5) is returned.


- `fun(5, &x)`: Now `t` is set to 5 (the return value of `fun(4, &x)`), 
`f` is set to `5 + 3 = 8`, `*fg` is set to `t` (which is 5), and `f` (which is 8) is returned.


So, the output of the program will be `8`. 
This is the 5th number in the Fibonacci sequence (starting from 1). 
The Fibonacci sequence is a series of numbers where a number is the addition of the last two numbers, 
starting with 0 and 1. The sequence goes: 0, 1, 1, 2, 3, 5, 8, 13, 21, and so on. 

As we can see, the 5th number is 8.

** Value of X **

printf("%d", x);

If we print this in main function value of x will be 5.

The variable x is used here mainly as a way to pass an integer by reference to the function fun. 
This allows fun to modify the original value of x in the main function. 
However, since the initial value of x is not used in any computation, it could be any integer, not necessarily 15. 

This is just an example to demonstrate how passing by reference works in C. 
The specific value of 15 doesn’t have any special significance in this context. It’s just an arbitrary value. 
The important part is the address of x (&x), which is passed to fun, allowing fun to modify x’s value.

*/