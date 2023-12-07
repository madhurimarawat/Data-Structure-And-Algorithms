// Using Auto with Functions

#include <iostream>
using namespace std;

// Function returning different types
auto add(int a, double b) {

    // Auto deduces the return type based on the expression a + b
    return a + b;

}

// Function for adding string
auto add_String(const string& a, const string& b) {
    return a + b; // Concatenates the strings
}

int main() {

    // Auto infers the type of 'result' based on the return type of 'add'
    auto result = add(5, 3.14);
    cout << "Result of Addition of 5 and 3.14 is: " << result << endl;

    // Auto infers the type of 'result' based on the return type of 'add_String'
    auto result_Str = add_String("5.23", "3.14");
    cout << "Result of Addition of \"5.23\" and \"3.14\" is: " << result_Str << endl;

    // Auto infers the type of 'result' based on the return type of 'add_String'
    auto result_Str_Char = add_String("Hello", "World");
    cout << "Result of Addition of \"Hello\" and \"World\" is: " << result_Str_Char << endl;

    return 0;
}
