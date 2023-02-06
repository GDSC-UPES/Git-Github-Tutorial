//Writing a code to cylically rotate an array by 1 with size "n".

#include <stdio.h>
int main()
{
    int i, size, arr[100], ele; //declaring the variables used & the array
    printf("Please enter the size of the array: "); //taking input from the user for the size of the array
    scanf("%d", &size); //assigning the input taken to the variable "size"
    printf("Please enter the elements of the array: "); //taking input from the user for the elements of the array
    for (i=0; i<size; i++) {
        scanf("%d", &arr[i]); //assigning the input taken to the array or initializing the array
    }
    ele=arr[size-1]; //storing the last element of the array using a temporary variable 
    for (i=size-1; i>0; i--) { //running a for loop from the last element to the first element
        arr[i]=arr[i-1]; //cylically rotating the array by 1
    }
    arr[0]=ele; //initializing the first element of the array with the last element using the temporary variable 
    printf("The elements of the array (after rotating) are: "); //printing the cyclically rotated array
    for (i=0; i<size; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}