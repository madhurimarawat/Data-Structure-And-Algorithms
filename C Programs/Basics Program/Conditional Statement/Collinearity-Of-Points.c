// Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall 
// on one straight line. 

/*

To determine if three points (x1, y1), (x2, y2), and (x3, y3) lie on the same straight line, 
we can use the slope formula. The slope (m) between two points (x1, y1) and (x2, y2) is given by:

m = (y2 - y1) / (x2 - x1)

If the slopes between any two pairs of points are equal, then all three points lie on the same straight line.

Here's the algorithm to check if three points are collinear:

1. Calculate the slope (m1) between points (x1, y1) and (x2, y2).

2. Calculate the slope (m2) between points (x2, y2) and (x3, y3).

3. If ( m1 = m2 ), then the three points are collinear.

This program takes input for three points and calculates the slopes between pairs of points. 
If the slopes are equal, it prints that the three points are collinear; 
otherwise, it prints that they are not collinear.

*/

#include<stdio.h>

// Function to check for collinearity
int collinear_check(int x1, int y1, int x2, int y2, int x3, int y3){

    // Calculating Slope between first two points
    int m1 = (y2 - y1) / (x2 - x1);

    // Calculating Slope between next two points
    int m2 = (y3 - y2) / (x3 - x2);

    // Checking if Points are collinear or not
    if (m1 == m2){
        return 1;
    }
    else{
        return 0;
    }
}

// Main Function
int main(){

    // Declaring Variables
    int x1, y1, x2, y2, x3, y3;

    // Taking Input
    printf("Enter First Point Coordinates: ");
    scanf("%d %d", &x1, &y1);

    // Taking Input
    printf("Enter Second Point Coordinates: ");
    scanf("%d %d", &x2, &y2);

    // Taking Input
    printf("Enter Third Point Coordinates: ");
    scanf("%d %d", &x3, &y3);

    // Calling Function and printing result
    if (collinear_check(x1, y1, x2, y2, x3, y3) == 1){
        printf("Points are Collinear");
    }
    else{
        printf("Points are Not Collinear");
    }

}