/*

Question: Find the Output of The following Code

#include <stdio.h>
 int main() {
    int c = 5, no = 1000;
    do {
        no /= c;
    } while(c--);
    printf ("%d\n", no);
    return 0;
 }

1. Exception – Divide by zero
2. Syntax Error
3. 1
4. 0

Correct Answer: 1. Exception – Divide by zero

*/

#include <stdio.h>
int main()
{
    int c = 5, no = 1000;

    do
    {
        no /= c;
    } while (c--);

    printf("%d\n", no);

    return 0;
}

/*

Exception will occur and no output will be given except blank screen.

The loop will terminate when the value of c becomes 0 and exception divide by 0 will be raised.

*/