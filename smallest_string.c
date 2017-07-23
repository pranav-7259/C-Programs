#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main()
{
	char s[20],small[20];
	int i;

	printf("Enter a string- ");
	gets(s);
	strcpy(small,s);

	for(i=1;i<10;i++)
	{
		printf("Enter a string- ");
		gets(s);

		if( strcmp(small,s) > 0 )
			strcpy(small,s);		
	}

	printf("The smallest string is- ");
	puts(small);
}