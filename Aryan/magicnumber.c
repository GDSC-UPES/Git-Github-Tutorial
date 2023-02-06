//Code to check Magic number
#include<stdio.h>
int main()
{
	int n, sum=0, d, a;
	printf("Enter a number: ");
	scanf("%d", &n);
	a=n;
	label1:
	while(a>0)
	{
		d=a%10;
		sum+=d;
		a=a/10;
	}
    if(sum>9)
	{   a=sum;
	    sum=0;
		goto label1 ;//checking if Sum>9.if yes repeating the above statements
	}
	else if(sum==1)
	{
		printf("Magic number!");
	}
	else
	{
		printf("Not a magic number!");
	}
	return 0;
}