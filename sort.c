#include <stdio.h>

void main()
{
	int a[10],i,j,temp;
	srand(time(0));
	for(i=0;i<10;i++)
	{
		a[i] = rand()%100;
		printf("%d\t",a[i]);
	}

	for(i=0;i<9;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}

	}

	printf("The sorted array is - \n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}

}