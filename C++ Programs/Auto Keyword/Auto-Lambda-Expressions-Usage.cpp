// Auto and Lambda Expressions
/*
A lambda function in C++ is an anonymous function created using the `auto` keyword, simplifying type declarations.
Its syntax is `auto identifier = [](parameters) { body };`, encapsulating functionality for concise and flexible usage.

A lambda function is locally named (e.g., `add`), but its identity is confined to its specific usage and not globally
recognized, embodying its "anonymous" nature within the scope.

A lambda function in C++ is considered anonymous because it doesn't have a named identifier in the traditional sense 
like a regular function. Instead, it is defined inline using the lambda expression syntax, making it a concise and 
disposable function without a separate name in the code.
The anonymity emphasizes its role as a quick, local, and often short-lived function defined at the point of use.
*/

#include <iostream>
using namespace std;

int main() {

    // Lambda expression
    auto add = [](int a, int b) {
        return a + b;
    };

    auto sub = [](int a, int b) {
        return a - b;
    };

    cout << "Result of Addition of 3 and 4 Using Lambda Function is: " << add(3, 4) << endl;

    // Lambda function can be assigned to variable and invoke from there
    auto s = sub;
    cout << "Result of Subtraction of 3 and 4 Using Lambda Function is: " << s(3, 4) << endl;

    // Anonymous Nature of Lambda functions
    // To demonstrate this we will use a lambda function without a name
    cout << "Result of Multiplication of 3 and 4 Using Lambda Function Without Name is: " << [](int a, int b){return a*b; }(3,4) << endl;


    return 0;
}