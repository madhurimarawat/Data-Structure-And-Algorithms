#include <stdio.h>

// C Program for Printing Rectangle Pattern with a specified number of stars and rows
/*
* * * * *
*       *
* * * * *
*/

int main() {
    // Taking rows and stars as input
    int r, s;

    printf("Enter Number of Rows: ");
    scanf("%d", &r);

    printf("Enter Number of Stars: ");
    scanf("%d", &s);

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < s; j++) {
            if (i == 0 || i == r - 1 || j == 0 || j == s - 1) {
                printf("* ");
            } else {
                printf("  "); // Print spaces for the middle stars
            }
        }
        printf("\n");
    }

    return 0;
}
