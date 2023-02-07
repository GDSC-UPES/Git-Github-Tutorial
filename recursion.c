#include <stdio.h>

int recursive_binary_search(int arr[], int l, int r, int value) {
    int mid = (l+r)/2;
    if(value == arr[mid])
        return mid;
    if ((value > arr[l]) && (value < arr[mid]))
        return recursive_binary_search(arr, l, mid-1, value);
    else if ((value > arr[mid]) && (value < arr[r]))
        return recursive_binary_search(arr, mid+1, r, value);
}

int main() {
    int n, f;
    printf("Enter size of the array \n");
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++) {
        printf("Enter Element %d of the array \n", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be find \n");
    scanf("%d", &f);

    int x = recursive_binary_search(arr, 0, n-1, f);
    printf("%d", x);
}