/*

Question: Find the Output of The following Code

#include <stdio.h>

int main()
{
    int x, y = 5, z = 5;
    x = y == z;

    printf("%d", x);

    getchar();
    return 0;
}

1. TRUE
2. FALSE
3. 1
4. 0

Correct Answer: 4. 17

*/

#include <stdio.h>

int main()
{
    // Declaring Variables
    int x, y = 5, z = 5;

    // Using Assignment Operator
    x = y == z;

    printf("%d", x);

    getchar();

    return 0;
}

/*

The precedence of Assignment operator is highest and it is 
right to left so first y and z is compared and the result is true
which is 1, hence 1 will be stored in x

*/