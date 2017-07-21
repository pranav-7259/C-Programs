#include<stdio.h>

void main()
{
	int a[5][5];
	int i,j,n=1;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			a[j][i] = n;
			n++;
		}
	}

	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d\t",a[i][j] );
		}

		printf("\n");
	}
}