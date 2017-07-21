#include <stdio.h>

void main()
{
	int a,b,c,max = 0;

	printf("Enter 3 numbers-\n");
	scanf("%d %d %d",&a,&b,&c);

	max = (a>b)?(a>c?a:c):(b>c?b:c);

	printf("The largest number is %d\n", max);


}