#include<stdio.h>

void main()
{
	int i,j,k,sum,rem;
	for(i=1000;i<=9999;i++)
	{
		sum=0;
		j=i;

		do
		{

			rem = j%10;
			sum+=rem;
			j/=10;
			
		}while(j>0 && sum<10);

		if(sum==9)
			printf(" %d ", i);	
	}
}