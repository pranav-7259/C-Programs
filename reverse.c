#include<stdio.h>

void main()
{
	int a[10],i,end = 9,temp;
	
	srand(time(0));
	
	for(i=0;i<10;i++)
		{
			a[i]=rand()%100;
			printf(" %d ", a[i]);
		}

	for(i=0;i<5;i++,end--)
	{
		temp = a[i];
		a[i] = a[end];
		a[end] = temp;
	}

	for(i=0;i<10;i++)
		printf(" %d ", a[i]);


}