#include<stdio.h>

void main()
{
	int a[10],b[10],i;
	
	srand(time(0));
	
	for(i=0;i<10;i++)
	{
		a[i]=rand()%100;
		printf(" %d ",a[i] );

	}

	for(i=0;i<10;i++)
	{
		b[10-i-1]=a[i];
	}
	
	printf("Reverse array-\n");
	for(i=0;i<10;i++)
		printf(" %d ", b[i]);
}