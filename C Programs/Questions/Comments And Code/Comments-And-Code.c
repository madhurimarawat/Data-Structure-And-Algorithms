/*

Question: Find the Output of The following Code

#include <stdio.h>

int main() {
int first = 50, second = 60, third;
third = first /* Will this comment work? */ /* + second; 

printf("%d /* And this? */ /*\n", third); // Here one additional /* 
is added as it was taking the comment as terminating character

/*
getchar();
return 0;

}

1. Syntax Error
2. 110
3. 110 /* And this? */
/*
4. None of the above

Correct Answer: 3. 110 /* And this? */

#include <stdio.h>

int main() {
int first = 50, second = 60, third;
third = first /* Will this comment work? */ + second;
printf("%d /* And this? */ \n", third);
getchar();
return 0;

}