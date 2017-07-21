#include<stdio.h>

void main()
{
	int a[10],i,n;
	srand(time(0));
	
	printf("Random Array is -\n");
	
	for(i=0;i<10;i++)
	{
		a[i]=rand()%100;
		printf(" %d ",a[i] );
	}

	printf("\n");
	printf("Enter the number to be searched- ");
	scanf("%d",&n);

	for(i=0;i<10;i++)
	{
		if(a[i]==n)
		{
			printf("\nElement found at %d pos\n",i);
			break;
		}
	}

	if(i==10)
	{
		printf("\nError\n");
	}

}