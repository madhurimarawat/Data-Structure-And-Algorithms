/*

Question: Find the Output of The following Code

#include <stdio.h>

void main()
{
    int a[5] = {5, 1, 15, 20, 25};
    int i, j, m;
    i = ++a[1];
    j = a[1]++;
    m = a[i++];
    printf("%d, %d, %d", i, j, m);
}

1. 3, 2, 15
2. 2, 3, 20
3. 2, 1, 15
4. 1, 2, 2005

Correct Answer: 1. 3, 2, 15

*/

#include <stdio.h>

// Main function
void main()
{
    // Integer Array
    int a[5] = {5, 1, 15, 20, 25};

    // Integer variable
    int i, j, m;

    // Storing Values
    i = ++a[1];
    j = a[1]++;
    m = a[i++];

    // Printing Values
    printf("%d, %d, %d", i, j, m);
}

/*

1. First value of 2 will be stored in ias a[1] is 1 and
1 + 1 = 2.

2. Then value of 2 will be stored in j as a[1] is 1 and
1 + 1 = 2.

3. After this m will have value of 15 as first it will
access a[i++] and i is 2 and a[2] is 15, this happened
because it is post increment operator it will be done first
and incremented to 3 later.

Thus the final value of i will be 3.


*/