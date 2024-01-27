/*

Question: Find the Output of The following Code

#include <stdio.h>

 int fun(int n) {
 int i, j, sum = 0;
 for(i = 1; i <= n; i++)
 for(j = i; j <= i; j++)
 sum = sum + j;
 return sum;
 }

 int main() {
 printf("%d", fun(15));
 getchar();
 return 0;
 }


1. Syntax Error
2. 120
3. Infinite Loop
4. None of the above

Correct Answer: 2. 120

*/

#include <stdio.h>

int fun(int n)
{
    int i, j, sum = 0;
    for (i = 1; i <= n; i++)
        for (j = i; j <= i; j++)
            sum = sum + j;
    return sum;
}

int main()
{
    printf("%d", fun(15));
    getchar();
    return 0;
}

/*

The function fun calculates the sum of integers from 1 to n using nested loops.
The main prints fun(15).

*/