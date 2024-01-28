// Calculate the root of a Quadratic Equation

/*

The quadratic equation and the roots calculation formula:

The quadratic equation is given by:

ax^2 + bx + c = 0


The roots can be calculated using the quadratic formula:

x = (-b ± sqrt(b^2 - 4ac)) / (2a)


Explanation:

- (a), (b), and (c) are coefficients of the quadratic equation.

- b^2 - 4ac is the discriminant (Delta).

- For real and different roots (Delta > 0), there are two solutions:
 
 (x = (-b + sqrt(Delta}) / (2a)) and (x = (-b - \sqrt{\Delta}) / (2a)).

- For real and same roots (Delta = 0), the solution is (x = -b / (2a)).

- For complex roots (Delta < 0)), the solutions are in the form 

(x = -b / (2a) ± sqrt{Delta} / (2a)i), representing complex conjugate pairs.

*/

#include<stdio.h>
#include<math.h>

// Datatype is Void as we are not going to return anything
double quadraticRoot(double a, double b, double c){

    double determinant, root1, root2;

    determinant = pow(b, 2) - (4 * a * c);

    // Calculating Root based on condition of determinant
    if ( determinant > 0){

        root1 = (-b + sqrt(determinant)) / (2 * a);
        root2 = (-b - sqrt(determinant)) / (2 * a);

        // Printing Value of root
        printf("Roots are Real and Different.\n");
        printf("Roots of Quadratic Equation %.2lf x^2 + %.2f x + %.2f = 0 are: %.2lf and %.2lf", a, b, c , root1, root2);
    }

    else if(determinant == 0){

        root1 = (-b) / (2 * a);

        // Printing Value of root
        printf("Roots are Real and Same.\n");
        printf("Roots of Quadratic Equation %.2f x^2 + %.2f x + %.2f = 0 is: %.2f", a, b, c ,root1);
    }

    else{

        double realPart, imaginaryPart;

        realPart = (-b) / (2 * a);

        // Since the determinant is negative here we use its absolute Value(Positive Value)
        imaginaryPart = (sqrt(fabs(determinant))) / (2 * a);

        // Printing Value of root
        printf("Roots are Complex and Different.\n");
        printf("Roots of Quadratic Equation %.2f x^2 + %.2f x + %.2f = 0 are: (%.2f + %.2f i) and (%.2f - %.2f i)", a, b, c ,realPart, imaginaryPart, realPart, imaginaryPart);

    }
}

// Main Function
int main(){

    // Declaring Variables
    double a, b, c;

    // Taking Input
    printf("Enter the Roots of Quadratic Equation: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calling Function
    quadraticRoot(a, b, c);

    return 0;
}