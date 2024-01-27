/*

Question: Find the Output of The following Code

#include <stdio.h>

int main() {
static int i = 5;
if (--i) {
main();
printf("%d ", i);
}

1. 0000
2. 0123
3. 1234
4. 4321

Correct Answer: 1. 0000

*/

#include<stdio.h>

// Main Function
int main(){

    // Declaring Variable as static so that it retains its value between function call
    static int i = 5;

    if(--i){
        main();
        printf("%d", i);
    }
}

/*

This is a C program that uses recursion to print numbers. Here's how it works:

1. The `main` function is declared, and within it, a static integer `i` is initialized to 5. 
The keyword `static` means that the variable `i` retains its value between function calls.

2. The `if` statement checks if the decremented value of `i` is non-zero. 
If it is, it calls the `main` function again (recursion), and then prints the value of `i`.

3. This process repeats until `i` becomes 0. At this point, the `if` condition fails, and 
the program stops calling `main` recursively.

4. However, the `printf` statements that were waiting (due to the recursion) start executing 
in a last-in-first-out manner (as per the call stack mechanism in recursion).

So, the output of this program will be `0000`. This is because by the time the `printf` function 
is called, the value of `i` is already 0, and this 0 is printed for each of the 4 recursive calls to `main`. 

Please note that using recursion with the `main` function is generally not recommended as it is 
not considered good practice and can lead to undefined behavior in C. It's better to use a separate function
 for recursion. Also, always ensure that there is a base case to prevent infinite recursion.

*/