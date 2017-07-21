#include <stdio.h>
#include <string.h>

int no_of_words(char a[]){

	int i,count = 0;
	for(i=0;i<strlen(a);i++)
	{
		if(a[i-1] == ' ' )
			continue;

		if(a[i] == ' ')
			{	
				count++;

			}
	}

	return count;
}

void main()
{
	char s[20];
	int count;
	printf("Enter a string- ");
	gets(s);
	strcat(s," ");
	printf("No of words is %d",no_of_words(s));
}

