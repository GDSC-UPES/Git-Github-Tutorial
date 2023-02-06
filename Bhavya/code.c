#include <stdio.h>
struct term
{
    int degree;
    int coeff;
};
int main()
{
    int n;
    printf("Enter the highest degree in the polynomial:");
    scanf("%d",&n);
    struct term poly1[n+1], poly2[n+1], poly3[n+1], poly4[n+1];
    printf("Enter the degree and coefficient respectively from lowest degree to highest for 1st polynomial:\n");
    for(int j=0;j<n+1;j++)
    {
        scanf("%d",&poly1[j].degree);
        scanf("%d",&poly1[j].coeff);
    }
    printf("Enter the degree and coefficient respectively from lowest degree to highest for 2nd polynomial:\n");
    for(int j=0;j<n+1;j++)
    {
        scanf("%d",&poly2[j].degree);
        scanf("%d",&poly2[j].coeff);
    }
    for(int i=0;i<n+1;i++)
    {
        poly3[i].degree=poly4[i].degree=poly1[i].degree;
        poly3[i].coeff=poly1[i].coeff+poly2[i].coeff;
        poly4[i].coeff=poly1[i].coeff-poly2[i].coeff;
    }
    printf("Addition:");
    for(int i=0;i<n+1;i++)
    {
        if(poly3[n-i].coeff>-1)
            printf("+%dx%d",poly3[n-i].coeff,n);
        else
            printf("\b%dx%d",poly3[n-i].coeff,n);
    }
    printf("\nSubtraction:");
    for(int i=0;i<n+1;i++)
    {
        if(poly4[n-i].coeff>-1)
            printf("+%dx%d",poly4[n-i].coeff,n);
        else
            printf("\b%dx%d",poly4[n-i].coeff,n);
    }
    return 0;
}