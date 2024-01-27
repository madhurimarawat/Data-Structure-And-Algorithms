/*

Question: Find the Output of The following Code

#include <stdio.h>

int main()
{
    char arr[] = "Welcome to CSVTU";
    printf("%d", sizeof(arr));
    getchar();
    return 0;
}

1. 0
2. 4
3. 8
4. 17

Correct Answer: 4. 17

*/

#include <stdio.h>

int main()
{
    char arr[] = "Welcome to CSVTU";
    printf("%d", sizeof(arr));
    getchar();
    return 0;
}

/*

This simply returns the size of character array, since size of
character is 1 so the final size is printed as 17.

*/