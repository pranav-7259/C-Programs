#include<stdio.h>
#include<string.h>
#include<conio.h>

next(char ch)
{
	if(ch>='a' && ch<'z' || ch>='A' && ch<'Z')
	{
		ch = ch+1;
	}

	if(ch == 'z' || ch == 'Z')
	{
		ch = ch-25;
	}

	printf("\nNext character - %c",ch);
	
}
main()
{
	char ch;
	printf("Enter a character\n");
	ch=getche();
	next(ch);
}
