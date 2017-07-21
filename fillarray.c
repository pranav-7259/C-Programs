#include<stdio.h>

void fill_array(int a[],int size,int val)
{
	int i;
	for(i=0;i<size;i++)
		a[i] = val;	
}

void main()
{
	int a[100],size,value,i;
	printf("Enter the size and the value to fill the array with - ");
	scanf("%d %d",&size,&value);
	fill_array(a,size,value);
	printf("The array is - ");
	for(i=0;i<size;i++)
		printf("%d\t",a[i]);

}