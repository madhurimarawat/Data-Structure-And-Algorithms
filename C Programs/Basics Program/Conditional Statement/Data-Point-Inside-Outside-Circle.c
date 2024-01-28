// Given a point (x1, y1), write a program to check whether that point lies outside or inside or in circle 
// of radius r and center (h, k).

/*

To check whether a point (x1, y1) lies outside, inside, or on the circle with radius r and center (h, k), you can use the distance formula. The distance d between two points (x1, y1) and (h, k) is given by:


d = sqrt((x1 - h)^2 + (y1 - k)^2)


Now, compare the calculated distance d with the radius r:

1. If d > r, the point lies outside the circle.
2. If d = r, the point lies on the circle.
3. If d < r, the point lies inside the circle.


This algorithm uses the distance formula to determine the position of a point relative to a circle with a given center and radius.

*/

#include<stdio.h>
#include<math.h>

// Function for Checking
int pointDistance(float x1, float y1, float r, float h, float k){

    // Declaring Variable for distance
    float distance = sqrt( pow(( x1 - h ), 2) + pow((y1 - k), 2) );

    // Checking Condition
    if (distance > r){
        printf("Data Point Lies Outside the Circle.");
    }
    else if (distance == r){
        printf("Data Point Lies On the Circle.");
    }
    else{
        printf("Data Point Lies Inside the Circle.");
    }

}

// Main Function
int main(){

    // Declaring Variables
    float x1, y1, r, h, k;

    // Taking Input

    printf("Enter Data Point Coordinates: ");
    scanf("%d %d", &x1, &y1);

    printf("Enter Radius of Circle: ");
    scanf("%d", &r);

    printf("Enter Circle Center Coordinates: ");
    scanf("%d %d", &h, &k);

    // Calling Function
    pointDistance(x1, y1, r, h, k);

    return 0;
}