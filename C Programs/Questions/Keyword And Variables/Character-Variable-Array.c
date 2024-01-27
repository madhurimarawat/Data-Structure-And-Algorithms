/*

Question: Find the Output of The following Code

#include <stdio.h>

int main(void)
{
    char p;
    char buf[10] = {1, 2, 3, 4, 5, 6, 9, 8};
    p = (buf + 1)[5];
    printf("%d", p);
    return 0;
}

1. 5
2. 6
3. 9
4. Error

Correct Answer: 3. 9

*/

#include <stdio.h>

int main(void)
{
    // Declaring Character
    char p;

    // Making Character Array
    char buf[10] = {1, 2, 3, 4, 5, 6, 9, 8};

    // Storing value in p
    p = (buf + 1)[5];

    // Printing Value of p
    printf("%d", p);

    return 0;
}

/*

This C code involves the use of character arrays and pointers. Here's how it works:

1. `char buf[10] = {1, 2, 3, 4, 5, 6, 9, 8};` This line declares a character array `buf` 
of size 10 and initializes the first 8 elements with the values 1 to 6, 9, and 8.


2. `p = (buf + 1)[5];` This line is a bit tricky. It increments the `buf` pointer by 1, 
effectively pointing to the second element of the array (since array indexing starts at 0). 
Then it treats this incremented pointer as a new array and accesses the 6th element (index 5) 
of this "new" array. So, it's equivalent to accessing the 7th element of the original `buf` 
array. In this case, that value is 9.


3. `printf("%d", p);` This line prints out the value of `p`, which is 9.

*/