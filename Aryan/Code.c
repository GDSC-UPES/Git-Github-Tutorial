//sorting of an array.

#include<stdio.h>
int main()
{
    int i,j,n,temp;
    printf("Enter the size of the array:\t");
    scanf("%d", &n );

    int a[n];
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The sorted array is:\n");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    return(0);
}