#include<stdio.h>

void main()
{
	int i,j,k,sum,rem;
	for(i=1000;i<=9999;i++)
	{
		sum=0;
		
		for( j=i ; j>0 ; )
		{

			
			rem = j%10;
			j/=10;
			
			if(j%10>rem)
			{
				sum = 0;
				break;
			}

			sum+=rem;

			
		}

		if(sum==9)
			printf(" %d ", i);	
	}
}