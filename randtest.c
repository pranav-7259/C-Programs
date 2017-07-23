#include<stdio.h>

void main()
{
	int i=0,a[10];
	srand(time(0));
	for(i=0;i<10;i++)
	{
		a[i]=rand()%100;
	}

	for(i=0;i<10;i++)
	{
		printf(" %d ",a[i]);
	}
}