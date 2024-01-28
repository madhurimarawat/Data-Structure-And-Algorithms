/*

- **Enumeration (enum):**
  - An enumeration is a user-defined data type in C that consists of a set of named integer constants.
  - It allows you to create a group of related named constants, making the code more readable and self-explanatory.

- **Declaration:**
  - Enums are declared using the `enum` keyword, followed by a set of identifiers enclosed in curly braces.
  - Each identifier represents an enumeration constant, and the entire set is called an enumeration list.

- **Constant Values:**
  - By default, the first enumerator in the list is assigned the value 0, and each subsequent enumerator is 
  assigned a value one greater than the previous enumerator.

- **Explicit Values:**
  - You can explicitly assign values to enum constants. If an explicit value is not assigned, the 
  compiler assigns values automatically.

- **Example:**
  ```c
  enum Days { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };
  ```

- **Underlying Type:**
  - The underlying type of enums is typically `int`, but you can specify a different integral type if needed.

- **Usage:**
  - Enums are often used to improve code readability by replacing magic numbers with meaningful names.
  - They provide a way to define a set of related constants and use them in a more readable and maintainable manner.

- **Switch Statements:**
  - Enums are commonly used in `switch` statements, making the code more expressive when handling different cases.

- **Size:**
  - The size of an enum variable is determined by the size of its underlying type (usually `int`), 
  but it can be influenced by compiler-specific rules regarding padding and alignment.

- **Scoping:**
  - Enumerators are in the scope of the enumeration, but they are not in the same scope as variables or functions.

- **Enumerators as Integers:**
  - Enum constants can be treated as integers, and you can perform arithmetic operations on them.

Enums are a valuable feature in C for creating more expressive and self-documenting code by giving 
meaningful names to integral constants.

*/

#include <stdio.h>

// Declaration of an enumeration named Color
enum Color {
    RED,    // 0
    GREEN,  // 1
    BLUE    // 2
};

int main() {

    // Declaring variables of the Color enum type
    enum Color primaryColor = RED;
    enum Color secondaryColor = BLUE;

    // Using enum values
    printf("Primary Color Value (RED Color in Enum) is: %d\n", primaryColor);    // Output: 0
    printf("Secondary Color (BLUE Color in Enum) is: %d\n", secondaryColor); // Output: 2

    // Switch statement with enum
    switch (primaryColor) {
        case RED:
            printf("The selected color is Red.\n");
            break;
        case GREEN:
            printf("The selected color is Green.\n");
            break;
        case BLUE:
            printf("The selected color is Blue.\n");
            break;
        default:
            printf("Unknown color.\n");
    }

    // Printing size of enum
    // Since all are integer variables the size for all will be same
    printf("Size of Enum Element primaryColor is: %d\n", sizeof(primaryColor));

    // Making object to check size of enum
    enum Color c1;

    printf("Size of Enum is: %d", sizeof(c1));

    return 0;
}

/*

Explanation of the Code:

1. **Enum Values:**

   - The `primaryColor` is assigned the value `RED`, which corresponds to 0 in the enum.

   - The `secondaryColor` is assigned the value `BLUE`, which corresponds to 2 in the enum.


2. **Switch Statement Output:**

   - The switch statement checks the value of `primaryColor` and prints "The selected color is Red." 
   since `primaryColor` is RED (0).


3. **Size of Enum Element (`primaryColor`):**

   - The size of `primaryColor` is printed using `sizeof(primaryColor)`. The output is `4`.

   - The size of the enum element is 4 bytes. This is because the underlying type of the enum is `int`, 
   and on many systems, an integer occupies 4 bytes.


4. **Size of Entire Enum (`enum Color c1;`):**

   - An object `c1` of the `Color` enum is created, and the size of the entire enum is 
   printed using `sizeof(c1)`. The output is `4`.

   - The size of the entire enum is also 4 bytes. This is because the enum's underlying 
   type is `int`, and the size of the entire enum is determined by the size of its underlying type.


In summary, the output indicates that the size of both the individual enum element (`primaryColor`) 
and the entire enum (`Color`) is 4 bytes, which is consistent with the size of an integer on many 
systems. The `sizeof` operator provides the size in bytes, and the value 4 is a common size 
for integers in many C implementations.

*/