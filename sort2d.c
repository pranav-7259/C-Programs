#include<stdio.h>

void main()
{
	int a[5][5],b[25],i,j,k,temp;
	printf("\n");
	srand(time(0));

	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			a[i][j] = rand()%100;
		}
	}

	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d\t", a[i][j] );
		}

		printf("\n");
	}

	printf("\n");


	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			b[i*5+j] = a[i][j];
			
		}
	}

	for(i=0;i<24;i++)
	{
		for(j=i+1;j<25;j++)
		{
			if(b[i]>b[j])
			{
				temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
		}

	}

	/*for(i=0;i<25;i++)
	{
		printf("%d\t", b[i] );
	}*/

	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			a[i][j] = b[i*5+j] ;
			
		}
	}

	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d\t", a[i][j] );
		}

		printf("\n");
	}

	
}

