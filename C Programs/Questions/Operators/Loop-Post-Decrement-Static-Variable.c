/*

Question: Find the Output of The following Code

#include <stdio.h>

int main() {
static int var = 5;
printf("%d ", var--);
if (var)
main();
}

1. 1 2 3 4 5
2. 5 5 5 5 5
3. 4 3 2 1
4. 5 4 3 2 1

Correct Answer: 4. 5 4 3 2 1

*/

#include<stdio.h>

// Main Function
int main(){

    // Declaring Variable as static so that it retains its value between function call
    static int var = 5;

    printf("%d",var--);

    if(var)
        main();
    
}

/*

This is a C program that uses recursion to print numbers. Here's how it works:

The code you've posted is a C program that uses recursion to print numbers. Here's how it works:

1. The `main` function is declared, and within it, a static integer `var` is initialized to 5. 
The keyword `static` means that the variable `var` retains its value between function calls.

2. The `printf` function prints the current value of `var`, and then `var` is decremented by 1 (`var--`).

3. The `if` statement checks if `var` is non-zero. If it is, it calls the `main` function again (recursion).

4. This process repeats until `var` becomes 0. At this point, the `if` condition fails, and
the program stops calling `main` recursively.

So, the output of this program will be `54321`. This is because each time before the 
`main` function is called recursively, the current value of `var` is printed, and then `var` is decremented. 

Please note that using recursion with the `main` function is generally not recommended as it is not 
considered good practice and can lead to undefined behavior in C. It's better to use a separate function 
for recursion. Also, always ensure that there is a base case to prevent infinite recursion.

*/