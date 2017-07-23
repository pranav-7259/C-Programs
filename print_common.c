#include<stdio.h>

main()
{
	int a[10],b[10],i;

	puts("Enter array a- ");

	for(i = 0;i<10;i++)
		{
			scanf("%d",&a[i]);
		}

	puts("Enter array b- ");	
	for(i = 0;i<10;i++)
		{
			scanf("%d",&b[i]);
		}

	print_common(a,b);		
}

print_common(int a[10],int b[10])
{
	int i,j,c[10]={0},k=0;

	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(a[i] == c[j])
				continue;
			
			if(a[i] == b[j])
			{
				c[k] = a[i];
				k++;
				break;
			}
		}
	}

	for(i=0;i<k;i++)
		printf("%d\t", c[i] );
}


