#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

void main(int argc,char *argv[])
{
	FILE *fp1;
	char *st1,line[100],big[100]="";
	if(argc<2)
		{
			printf("Usage: a <file1> ");
			exit(1);
		}

	fp1 = fopen(argv[1],"r");
	
	
	if(fp1 == NULL)
		{	printf("File not found\n");	
			exit(1);
		}

	while(1)
	{
		st1 = fgets(line,100,fp1);
		
		if(!st1)
			break;

		if(strlen(line)>strlen(big))
			strcpy(big,line);
	}

	printf("%s\n", big );
	fclose(fp1);
}