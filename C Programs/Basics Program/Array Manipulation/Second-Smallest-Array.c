// Finding the Second _smallest Element of Array

#include <stdio.h>

int second_smallest_Element(int arr[], int n) {

    // Variable to store smallest and second smallest elements
    int smallest, second_smallest;

    // Make sure there are at least two elements in the array
    if (n < 2) {
        printf("Array should have at least two elements.");
        return -1; // return an error value
    }

    // Initializing smallest and second_smallest with the first two elements
    if (arr[0] < arr[1]) {
        smallest = arr[0];
        second_smallest = arr[1];
    } else {
        smallest = arr[1];
        second_smallest = arr[0];
    }

    // Looping through the array starting from the third element
    for (int i = 2; i < n; i++) {
        if (arr[i] < smallest) {
            second_smallest = smallest;
            smallest = arr[i];

        } else if (arr[i] < second_smallest && arr[i] != smallest) {
            second_smallest = arr[i];
        }
    }

    return second_smallest;
}

// Main Function
int main() {
    int arr[] = {1, 2, 4, 5, 7, 3, 56}, n = 7;

    // Calling Function
    int result = second_smallest_Element(arr, n);

    if (result != -1) {
        printf("Second smallest Element is: %d", result);
    }

    else{
        printf("Array has only one element.");
    }

    return 0;
}