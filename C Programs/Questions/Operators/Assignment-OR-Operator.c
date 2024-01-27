/*

Question: Find the Output of The following Code

#include <stdio.h>

int main()
{
    int m, i = 0, j = 1, k = 2;
    m = i++ || j++ || k++;
    printf("%d %d %d %d", m, i, j, k);
    return 0;
}

1. 1 1 2 3
2. 1 1 2 2
3. 0 1 2 2
4. 0 1 2 3

Correct Answer: 2. 1 1 2 2

*/

#include <stdio.h>

int main()
{
    // Declaring Variables
    int m, i = 0, j = 1, k = 2;

    // Storing Result in m
    m = i++ || j++ || k++;

    // Printing Values
    printf("%d %d %d %d", m, i, j, k);

    return 0;
}

/*

OR condition only checks till TRUE(1) so first it will check
from left to right(Associativity of OR operator), so i wil be
incremented and j will be incremented as well, also or returns 
1 for all integers except 0 so it will return 1 only for m.

Because of this k would not be incremented.

*/