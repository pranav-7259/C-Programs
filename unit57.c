#include <stdio.h>
#include <string.h>

void main()
{
	int i;
	char a[100][10];
	printf("Enter the numbers- \n");
	
	for(i=0;i<100;i++)
	{	
		gets(a[i]);
		if(strcmp(a[i],"10") == 0)
			break;
	}
		
	
	printf("The number are \n");

	for(i=0;i<100;i++)
		{
			if(strstr(a[i],"7") || strstr(a[i],"5"))
			puts(a[i]);
		}
	
}

