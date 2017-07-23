#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main()
{
	char str[10][20];
	int i,sum = 0;
	float avg = 0.0 ;


	for(i=0;i<10;i++)
	{
		
		printf("Enter string- ");
		gets(str[i]);
		sum += strlen(str[i]);
		  
	}

	avg = (float) sum/10;
	
	for(i=0;i<10;i++)
	{
		if(strlen(str[i])>avg)
		{
			puts(str[i]);
		}
	}
}