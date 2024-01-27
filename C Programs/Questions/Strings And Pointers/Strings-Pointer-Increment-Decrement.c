/*

Question: Find the Output of The following Code

#include <stdio.h>

int main() {

    char str[] = "Welcome\nto CSVTU";

    // Declaring pointers
    char *ptr1, *ptr2;

    // Giving value to pointer

    ptr1 = &str[3];

    ptr2 = str + 5;

    // Printing

    printf("%c", ++*str - --*ptr1 + *ptr2 +2);
    printf("%s", str);

    getchar();


    return 0;

}

1. Welcome to CSVTU
2. Syntax Error
3. eXelbome to CSVTU
4. None of the above

Correct Answer: 3. eXelbome to CSVTU

*/

#include <stdio.h>

int main()
{

    char str[] = "Welcome\nto CSVTU";

    // Declaring pointers
    char *ptr1, *ptr2;

    // Giving value to pointer

    ptr1 = &str[3];

    ptr2 = str + 5;

    // Printing

    printf("%c", ++*str - --*ptr1 + *ptr2 + 2);
    printf("%s", str);

    getchar();

    return 0;
}

/*

First, let's understand the initial setup:

char str[] = "Welcome\nto CSVTU";
char *ptr1, *ptr2;
ptr1 = &str[3];
ptr2 = str + 5;

Here, `str` is a character array that holds the string `"Welcome\nto CSVTU"`.
`ptr1` is a pointer that points to the 4th character of `str` (0-indexed), which is `'c'`.
`ptr2` points to the 6th character of `str`, which is `'m'`.

Now, let's dissect the `printf` statements:

1. `printf("%c", ++*str - --*ptr1 + *ptr2 +2);`

This statement is printing a single character (`%c`). The character is calculated as follows:

- `++*str`: This increments the value at the location pointed to by `str` (which is `'W'` initially) by 1.
So, `'W'` becomes `'X'`, and its ASCII value is 88.


- `--*ptr1`: This decrements the value at the location pointed to by `ptr1` (which is `'c'` initially) by 1.
So, `'c'` becomes `'b'`, and its ASCII value is 98.


- `*ptr2`: This is the value at the location pointed to by `ptr2` (which is 'm'), and its ASCII value is 109.

So, the expression ++*str - --*ptr1 + *ptr2 +2 becomes 88 - 98 + 109 + 2 = 101. The ASCII value 101
corresponds to the character `'e'`.


2. printf("%s", str);

This statement prints the string pointed to by `str`. However, remember that the first character of `str`
was incremented in the previous `printf` statement.

So, instead of "Welcome\nto CSVTU", it now prints "Xelcome\nto CSVTU".

So, the output of your code will be:


eXelcome\nto CSVTU

*/