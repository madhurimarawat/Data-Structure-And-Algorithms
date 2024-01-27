/*

Question: Find the Output of The following Code

int main() {
    printf("%x", -1 << 1);
    getchar();
    return 0;
}

1. fffffffe
2. 1
3. 11111111
4. ffffffff

Correct Answer: 1. fffffffe

*/

#include<stdio.h>

int main(){

    printf("%x", -1 << 1);

    getchar();

    return 0;
}

/*

Let's break down the expression `printf("%x", -1 << 1);` step by step.

1. **Integer Representation of -1:**
   - The decimal representation of -1 in 32-bit signed integer (assuming two's complement) is represented as all bits set to 1.
   - In hexadecimal, -1 is represented as `0xFFFFFFFF` (assuming a 32-bit system).

2. **Left Shift by 1:**
   - The expression `-1 << 1` means shifting all the bits of -1 one position to the left.
   - The result of left-shifting `-1` by 1 is equivalent to multiplying it by 2.
   - Shifting `0xFFFFFFFF` to the left by 1 results in `0xFFFFFFFE`.

3. **Printf Statement:**
   - The `printf` statement uses the format specifier `%x`, which means to print an integer in hexadecimal format.
   - Therefore, `printf("%x", -1 << 1);` will print the hexadecimal representation of the result of `-1 << 1`.

4. **Final Output:**
   - The final output will be the hexadecimal representation of `0xFFFFFFFE`.

So, when we execute the code `printf("%x", -1 << 1);`, it will print `fffffffe` as the output, which is the hexadecimal
representation of the result of shifting -1 to the left by 1.
*/