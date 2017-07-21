#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

void main(int argc,char *argv[])
{
	FILE *fp1,*fp2;
	char *st1,*st2,line1[100],line2[100];
	int lineno = 1,cmp;
	if(argc<3)
		{
			printf("Usage: a <file1> <file2>");
			exit(1);
		}

	fp1 = fopen(argv[1],"r");
	fp2 = fopen(argv[2],"r");
	
	if(fp1 == NULL || fp2 == NULL)
		{	printf("File not found\n");	
			exit(1);
		}
	
	st1 = fgets(line1,100,fp1);
	st2 = fgets(line2,100,fp2);

	while(1)
	{
		
		if(!st1 && !st2)
			{
				printf("Files are same\n");
				exit(1);
			}

		if(!strcmp(line1,line2))
				{
					
					st1 = fgets(line1,100,fp1);
					st2 = fgets(line2,100,fp2);
					lineno++;
				}

		else
				{
					printf("%s\n", line1);
					printf("%s\n", line2);
					printf("Mismatch found at lineno - %d ",lineno );
					exit(1);
				}	
		
	}


	fclose(fp1);
	fclose(fp2);
}