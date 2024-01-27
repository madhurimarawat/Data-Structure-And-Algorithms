/*

Question: Find the Output of The following Code

#include <stdio.h>

int main() {

char a[2][3][3] = {'C', 'S', 'V', 'T', 'U', 'B', 'h', 'i', 'l', 'a', 'i'};

printf("%s ", **a);
getchar();
return 0;
}

1. Syntax Error
2. CSVTU Bhilai
3. No Output
4. Exception

Correct Answer: 2. CSVTU Bhilai
*/

#include <stdio.h>

int main() {

char a[2][3][3] = {'C', 'S', 'V', 'T', 'U', 'B', 'h', 'i', 'l', 'a', 'i'};

printf("%s ", **a);

getchar();
return 0;

}

/*

Here we are printing multidimensional array using pointer of pointers

*/