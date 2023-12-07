// Program to see the range of Integer
// Program to demonstrate the range of data types

/*
Question: What are the consequences when the values assigned to a data type exceed its maximum limit or fall below its minimum limit?

Answer: 

If values exceed the maximum or fall below the minimum range of a data type, it results in overflow or underflow, 
leading to unpredictable outcomes.If the value of a variable goes beyond the predefined range, 
it will wrap around to the other end of the range due to overflow or underflow. 
For example, if an int variable is assigned a value larger than INT_MAX, it will result in an integer overflow. 
Similarly, if a value smaller than INT_MIN is assigned, it will result in an integer underflow. 
The exact behavior may depend on the specific compiler and system used. 

** If we will give value less than int min compiler will give overflow error because:


Error:

Range-Of-Datatypes.c: In function 'main':
Range-Of-Datatypes.c:27:13: warning: overflow in implicit constant conversion [-Woverflow]
     int x = -2147483649;
             ^

The terms "overflow" and "underflow" are often used in the context of numerical computations. 
However, in the context of compiler warning, "overflow" is used to indicate that the value we're 
trying to store is outside the valid range of an `int`. 
In this case, `-2147483649` is less than `INT_MIN` (`-2147483648`), so it can't be represented as an `int`. 
The term "overflow" in this warning message doesn't distinguish between exceeding the maximum limit
 (overflow in the traditional sense) or going below the minimum limit (underflow). 
 It simply means the value is out of range. So, even though we might expect the term "underflow" 
 to be used here, the compiler uses "overflow" to indicate any out-of-range error. 

*/

#include<stdio.h>
#include<limits.h>

int main(){

    // If the value of integer value goes after the predefined range
    // It will print the minimum possible range value of integer
    // In other words it will round up the values
    // Giving a value less than minimum value gives error
    int x = 2147483649;
    printf("The Value of X is: %d\n", x);
    
    // Range of char
    printf("The minimum value of CHAR is: %d\n", CHAR_MIN);
    printf("The maximum value of CHAR is: %d\n", CHAR_MAX);

    // Range of short
    printf("The minimum value of SHORT is: %d\n", SHRT_MIN);
    printf("The maximum value of SHORT is: %d\n", SHRT_MAX);

    // Range of int
    printf("The minimum value of INT is: %d\n", INT_MIN);
    printf("The maximum value of INT is: %d\n", INT_MAX);

    // Range of long
    printf("The minimum value of LONG is: %ld\n", LONG_MIN);
    printf("The maximum value of LONG is: %ld\n", LONG_MAX);

    return 0;
}