/*

Question: Find the Output of The following Code

#include<stdio.h>
#include<stdlib.h>

void fun(int *a){

    a = (int*)malloc(sizeof(int));
}

int main(){

    int *p;

    // Calling Function
    fun(p);

    *p = 6;

    printf("%d\n", *p);

    getchar();
    return 0;
    
}

1. 6
2. Segmentation Fault
3. Syntax Error
4. None of the above

Correct Answer: 2. Segmentation Fault

*/

#include<stdio.h>
#include<stdlib.h>

// Function
void fun(int *a){

    a = (int*)malloc(sizeof(int));
}

// Main Function
int main(){

    // Declaring Pointer Variable
    int *p;

    // Calling Function
    fun(p);

    *p = 6;

    printf("%d\n", *p);

    getchar();
    return 0;
    
}

/*

The code will cause a segmentation fault. 
This is because the function `fun` allocates memory to a local copy of `p`, not `p` itself. 
When you try to dereference `p` in the `main` function, it's still uninitialized, leading to undefined behavior,
typically a segmentation fault.
 
 If it is not giving a segmentation fault, it could be due to specific behaviors of your compiler or system.

The output of the code could be `6` if the memory location pointed to by `p` in the `main` function happens to hold
the value `6` at the time of dereferencing. This is due to undefined behavior, as `p` is an uninitialized pointer. 
The value `6` is not guaranteed and can change across different runs, systems, or compilers. 
It's important to note that relying on such behavior is not recommended as it can lead to unpredictable results and
potential issues such as segmentation faults. 

** It's always a good practice to initialize pointers before use. **

*/