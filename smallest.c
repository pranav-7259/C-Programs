#include<stdio.h>

void main()
{
	int i,n,smallest;
	printf("Enter a number and enter -1 to stop - ");
	scanf("%d",&n);
	smallest = n;
	for(i=1;;i++)
	{
		if(n==-1)
			break;
		
		if(n<smallest)
		{
			smallest = n;
		}
			
		printf("Enter a number and enter -1 to stop - ");
		scanf("%d",&n);
			
		
	}

	printf("The smallest number is %d",smallest);
}