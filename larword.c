#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main()
{
	char s[200],word[200] = "",largword[20];
	int i,j = 0;
	
	printf("Enter a string- ");
	gets(s);

	strcat(s," ");
	strcpy(largword,"");

	for(i=0; s[i] ;i++)
	{
		
		if( s[i] == ' ')
		{
			word[j] = '\0';
			j = 0;
			if(strlen(word)>strlen(largword))
				strcpy(largword,word);
		}

		else
		{
			word[j] = s[i];
			j++;
		}
	}

	printf("Largest word is-\n");
	puts(largword);


}
