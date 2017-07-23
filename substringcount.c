#include<stdio.h>
#include<string.h>

int substring_count(char s[],char sub[])
{
	
	char *temp = s;
	int count = 0;
	while(temp = strstr(temp,sub))
	{
			count++;
			temp++;
	}
	return count;
}


void main()	
{
	char s[100],sub[100];
	int c;
	printf("Enter the main string- ");
	gets(s);
	printf("Enter the substring- ");
	gets(sub);
	c = substring_count(s,sub);
	printf("The no. of times substring is present is %d",c);
}