#include<stdio.h>

void main()
{
	int month;
	printf("Enter month as number\n");
	scanf("%d",&month);

	if(month == 1 ||month == 3 ||month == 5 ||month == 7 ||month == 8 ||month == 10 ||month == 12  )
	{
		printf("No of days is 31\n");
	}

	else
		if(month == 4 ||month == 6 ||month == 9 ||month == 11)
		{
			printf("No. of days is 30\n");
		}

		else if(month == 2)
		{
			printf("No. of days is 28\n");
		}

		else
		{
			printf("Invalid month\n");
		}

}