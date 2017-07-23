#include<stdio.h>

void main()
{
	int a[10]={1,3,5,7,8,9,10,11,12,13};
	int i,pos,n;

	printf("Enter the element to be searched- ");
	scanf("%d",&n);

	for(i=0; i<10 && a[i]<=n ; i++)
	{
		if(a[i]==n)
		{
			pos = i;
			break;
		}
	}

	if(i == 10)
	{
		printf("Element not found");
	}

	else
	{
		printf("Element found at position %d",pos+1);	
	}


}