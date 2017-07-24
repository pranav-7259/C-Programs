#include<stdio.h>


void main()
{
	int i,n,sum=0,count=0;
	printf("Enter 10 numbers");
	for(i=1;i<=10;i++)
	{
		scanf("%d",&n);
		if(n>0)
		{
			sum+=n;
			count+=1;
		}

	}
	printf("The sum is %d",sum);
}