#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main()
{
	char s[20],word[20] = "";
	int i;
	
	printf("Enter a string- ");
	gets(s);

	for(i=0 ; s[i] != ' ' && s[i] != '\0' ; i++)
	{
		word[i] = s[i] ;
		
	}

	printf("%d\n", strlen(word) );

	
	puts(strrev(word));

}

