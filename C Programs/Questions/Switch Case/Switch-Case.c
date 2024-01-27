/*

Question: Find the Output of The following Code

#include<stdio.h>

int main(){

    int i = 0;

    for(i = 0; i < 20; i++){

        switch(i){

            case 0:
                i += 5;

            case 1:
                i += 2;

            case 5:
                i += 5;

            default:
                i += 4;
                break;
        }

        printf("%d ", i);
    }

    getchar();
    return 0;
    
}

1. 0 1
2. 10 15 20
3. 16 21
4. Syntax Error

Correct Answer: 3. 16 21

*/

#include<stdio.h>

// Main Function
int main(){

    // Declaring Variable
    int i = 0;

    // Loop
    for(i = 0; i < 20; i++){

        switch(i){

            case 0:
                i += 5;

            case 1:
                i += 2;

            case 5:
                i += 5;

            default:
                i += 4;
                break;
        }

        printf("%d ", i);
    }

    getchar();
    return 0;
    
}

/*

In this code break is not provided after case so i will be incremented till default case and after that
it will be printed.

For First Iteration:

As first time case is matched to 0 and after that it will keep on executing

i = 5 + 2 + 5 + 4 = 16

For Second Iteration it will directly go to default case
Also i will be incremented from 16 to 17

i = 17 + 4 = 21

*/