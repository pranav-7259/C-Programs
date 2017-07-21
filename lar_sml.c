#include <stdio.h>

void find(int a[],int *smallest,int *largest)
{
	int i;
	*largest = 0;
	*smallest = a[0];
	for(i=0;i<10;i++)
	{
		if(a[i]<*smallest)
			*smallest = a[i];
		

		if(a[i]>*largest)
			*largest = a[i];
	}
}

void main()
{
	int a[10],smallest,largest,i;
	printf("Enter the array elements- ");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);

	find(a,&smallest,&largest);

	printf("The smallest number of the array is %d and the largest number of the array is %d",smallest,largest);

}