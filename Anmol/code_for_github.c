// Code to find the minimum and maximum value in an array entered by the user

#include <stdio.h>

int main() {
    // Declare and initialize the number of elements in the array
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Declare the array of size n
    int arr[n];

    // Let the user to enter the elements of the array
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize min and max values with the first element of the array
    int min = arr[0];
    int max = arr[0];

    // Loop through the array, starting from the second element
    for (int i = 1; i < n; i++) {
        // If the current element is less than the minimum value, update the minimum value
        if (arr[i] < min) {
            min = arr[i];
        }
        // If the current element is greater than the maximum value, update the maximum value
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Print the minimum and maximum values
    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);
    return 0;
}
