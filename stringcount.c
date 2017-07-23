#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main()
{
	char s[20];
	int upper = 0, lower = 0, digits  = 0 , others = 0 ,i;
	printf("Enter string- ");
	gets(s);

	for(i = 0;s[i]!='\0';i++)
	{
		if(isupper(s[i]))
			upper ++;

		else if(islower(s[i]))
			lower ++;

		else if(isdigit(s[i]))
			digits ++;

		else
			others ++;
	}

	printf("Uppercase %d,Lowercase %d,Digits %d,Others %d",upper,lower,digits,others);
}