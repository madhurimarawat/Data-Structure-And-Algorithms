/*

Question: Find the Output of The following Code

#include <stdio.h>

int fun(char *str1)
{
    char *str2 = str1;
    while (*++str1)
        ;
    return (str1 - str2);
}

int main()
{
    char *str = "Welcome to CSVTU";
    printf("%d", fun(str));
    getchar();
    return 0;
}

1. Syntax Error
2. 16
3. Welcome to CSVTU
4. None of the above

Correct Answer: 2. 16

*/

#include <stdio.h>

int fun(char *str1)
{
    char *str2 = str1;

    while (*++str1);

    return (str1 - str2);
}

int main()
{
    char *str = "Welcome to CSVTU";

    printf("%d", fun(str));

    getchar();

    return 0;
}

/*

Let's break it down step by step with the string "Welcome to CSVTU" as an example:

1. `char *str2 = str1;` This line creates a new pointer `str2` and sets it to point to the same
location as `str1`. If we assume that the memory address of the first character 'W' is 1000 
(just for illustration), both `str1` and `str2` point to 1000.


2. `while (*++str1);` This line increments `str1` to point to the next character in the string, 
then checks if that character is the null character (`\0`). If it's not, it repeats the process. 
This continues until `str1` points to the null character at the end of the string. 
After this line, `str1` points to the memory address of the null character, which is 
1016 (1000 + 16 characters in the string).


3. `return (str1 - str2);` This line calculates the difference between the memory addresses that 
`str1` and `str2` point to. Since `str2` points to the start of the string and `str1` now points 
to the end, this difference is the length of the string. So, `str1 - str2` equals `1016 - 1000`,
which is 16.

So, the function `fun` returns the length of the string, which is a number, not the string itself. 
In the case of the string "Welcome to CSVTU", the length is 16, so that's what the function returns.

** Pointer Subtraction **

In C, when you subtract two pointers, the result is not the raw difference between the memory 
addresses. 

*** Instead, it's the number of elements (of the type the pointers point to) between the two pointers. ***

In this case, `str1` and `str2` are both pointers to `char`. When you subtract `str2` from `str1`, 
we get the number of `char` elements between the two pointers. Since `str2` points to the start of the 
string and `str1` points to the end, this is the length of the string.

So `str1` points to a higher memory address than `str2`, the result of `str1 - str2` is a 
positive number because it's the number of `char` elements from `str2` to `str1`, not the raw difference 
between the memory addresses. This is why the function returns the length of the string as a positive number. 

If we try to print the converse `str2 - str1`, it will print -16 as str1 points to a higher memory location
compared to str2.

*/