/*

Question: Find the Output of The following Code

#include <stdio.h>

int add(int a, int b)
{
    if (a != 0 && b != 0)
        return printf("%*c%*c", a, '.', b, '.');
    else
        return a != 0 ? a : b;
}

int main()
{
    int A = 0, B = 0;
    scanf("%d %d", &A, &B);
    printf("Required sum is %d", add(A, B));
    return 0;
}

Input: 22 10

1. 42
2. Compilation Error
3. Required sum is 32
4. 32

Correct Answer: 3. Required sum is 32

*/

#include <stdio.h>

// Function for Addition
int add(int a, int b)
{
    // Checking if Condition
    if (a != 0 && b != 0)

        return printf("%*c%*c", a, '.', b, '.');

    else
        return a != 0 ? a : b;
}

int main()
{
    // Declarin Variables
    int A = 0, B = 0;

    // Taking Input
    scanf("%d %d", &A, &B);

    // Calling Function
    printf("Required sum is %d", add(A, B));
    
    return 0;
}

/*

Let's break down the code with the inputs `22` and `10`:

1. `scanf("%d %d", &A, &B);` This line reads two integers from the standard input. 
In this case, you're entering `22` and `10`, so `A` becomes `22` and `B` becomes `10`.


2. `printf("Required sum is %d", add(A, B));` This line calls the `add` function with
 `A` and `B` as arguments and prints the result.


3. Inside the `add` function, it checks if both `a` and `b` are not zero. 
Since both `22` and `10` are not zero, it executes the `printf` function with a 
specific format string and returns the number of characters printed.


4. The format string `"%*c%*c"` is a bit unusual. The `*` in the format specification 
means that the width is taken from an argument, and the `c` means that a character is printed. 
So `printf("%*c%*c", a, '.', b, '.');` prints a space of width `a` (which is `22`), a space of 
width `b` (which is `10`), and two '.' characters. The width of a space is 1, so this `printf` 
call prints `a + b` characters in total.


5. The `printf` function returns the number of characters it successfully printed, so 
`printf("%*c%*c", a, '.', b, '.');` returns `22 + 10`, which is `32`. This value is then returned 
by the `add` function.


So, if you input `22` and `10`, the output of this code will be "Required sum is 32". The "32" 
comes from the `add` function, which returns the sum of the two inputs.

*/