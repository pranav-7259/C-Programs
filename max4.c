#include<stdio.h>

void main()
{
	int a,b,c,d,max;
	printf("Enter 4 numbers - ");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	max = a;
	if(b>max)
		max = b;

	if(c>max)
		max = c;

	if(d>max)
		max = d;

	printf("The max value is %d",max);
}