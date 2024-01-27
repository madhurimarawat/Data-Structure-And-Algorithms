/*

Question: Find the Output of The following Code

#include<stdio.h>

int main(){

    int i;

    i = 1, 2, 3;

    printf("i = %d\n", i);

    getchar();
    return 0;
    
}

1. i = 1
2. i = 2
3. i = 3
4. Syntax Error

Correct Answer: 1. i = 1

*/

#include<stdio.h>

// Main Function
int main(){

    // Declaring Variable
    int i;

    // Giving Multiple values to i
    i = 1, 2, 3;

    printf("i = %d\n", i);

    getchar();
    return 0;
    
}

/*

The code will set the value of i to 1. 

** In case of giving multiple values the first value will be assigned in C as the assignement operator(Right to Left)
has higher precedence than comma operator(Left to Right). **

Detailed Description:

The code uses the comma operator, which evaluates its operands from left to right and returns the value of the rightmost operand. 
However, the assignment operator `=` has higher precedence than the comma operator. 

So, in the expression `i = 1, 2, 3;`, the assignment `i = 1` is performed first due to higher precedence of `=`. 
This assigns the value `1` to `i`. Then, the comma operator causes the rest of the expressions `2, 3` to be evaluated, 
but their results are not stored anywhere. The final value of the whole expression is `3`, but this value is not used.

Therefore, the value of `i` is `1`, and the `printf` statement outputs `1`.

Here's a step-by-step breakdown:

1. `i = 1` is executed first due to higher precedence of `=`. Now, `i` is `1`.
2. The expressions `2` and `3` are evaluated in order, but their results are not stored.
3. The `printf` statement prints the value of `i`, which is `1`.

This is why the output of this code is `1`, not `2` or `3`. 

*/