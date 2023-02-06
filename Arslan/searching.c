//This code below demonstrates searching elements in an array using Limear & Binary Search.


#include <stdio.h>

// Function for Linear Search

void linearSearch(int arr[], int n, int f) {
    for(int i=0; i<n; i++) {
        if (arr[i] == f) 
            printf("Element found at Index-%d through Linear Search. \n", i);
    }
}


// Function for Binary Search

void binarySearch(int arr[], int size, int value) {
    int l=0, r=size-1, mid;
    while(l<r) {
        mid = (l+r) / 2;
        if(arr[mid] == value) {
            printf("Element found at Index-%d through Binary Search. \n", mid);
            break;
        }
        else if(value > arr[mid]) {
            l=mid+1;
        }
        else {
            r=mid-1;
        }
    }
}


// Main Driver Function

int main() {

    // n -> Size of array ; f -> Element to be found
    int n, f;
    printf("Enter size of the array \n");
    scanf("%d", &n);

    //Taking user input for array elements
    int arr[n];
    for(int i=0; i<n; i++) {
        printf("Enter Element %d of the array \n", i+1);
        scanf("%d", &arr[i]);
    }

    //Taking user input for element to be found
    printf("Enter the element to search for: \n");
    scanf("%d", &f);

    //Calling both the functions
    linearSearch(arr, n, f);
    binarySearch(arr, n, f);
}