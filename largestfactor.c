#include<stdio.h>

void main()
{
	int n,i,factor = 1;
	printf("Enter a number- ");
	scanf("%d",&n);

	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			factor = n/i;
			break;
		}

	}
	printf("The largest factor is- %d", factor );
}