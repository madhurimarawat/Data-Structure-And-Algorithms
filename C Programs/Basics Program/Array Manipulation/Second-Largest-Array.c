// Finding the Second Largest Element of Array

#include <stdio.h>

int Second_Largest_Element(int arr[], int n) {
    // Variable to store largest and second largest elements
    int largest, second_largest;

    // Make sure there are at least two elements in the array
    if (n < 2) {
        printf("Array should have at least two elements.");
        return -1; // return an error value
    }

    // Initializing largest and second_largest with the first two elements
    if (arr[0] > arr[1]) {
        largest = arr[0];
        second_largest = arr[1];
    } else {
        largest = arr[1];
        second_largest = arr[0];
    }

    // Looping through the array starting from the third element
    for (int i = 2; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    return second_largest;
}

// Main Function
int main() {
    int arr[] = {1, 2, 4, 5, 7, 3, 56}, n = 7;

    // Calling Function
    int result = Second_Largest_Element(arr, n);

    if (result != -1) {
        printf("Second Largest Element: %d", result);
    }
    
    else{
        printf("Array has only one element.")
    }

    return 0;
}
