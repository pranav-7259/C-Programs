#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

void main(int argc,char *argv[])
{
	FILE *fp1;
	char *st1,line[100],s[100];
	int lineno = 0;
	if(argc<2)
		{
			printf("Usage: a <file1> ");
			exit(1);
		}

	fp1 = fopen(argv[1],"r");

	printf("Enter the string to be searched- \n");
	gets(s);
	
	
	if(fp1 == NULL)
		{	printf("File not found\n");	
			exit(1);
		}

	while(1)
	{
		

		st1 = fgets(line,100,fp1);

		if(!st1)
			exit(1);

		if(strstr(line,s))
		{
			lineno++;
			printf("%d : %s",lineno,line);
		}
		else
			lineno++;

		
	}

	if(lineno == 0)
			printf("String '%s' not found\n", s );

	fclose(fp1);
}