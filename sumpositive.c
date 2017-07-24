#include<stdio.h>

void main()
{
	int count = 0,num[10],i,sum=0;
	printf("Enter 10 numbers:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
		if(num[i]>0)
		{
			count++;
			sum+=num[i];
		}
	}

	/*for(i=0;i<10;i++)
	{
		
	}*/


	printf("The average is %f",(float)sum/count);


}