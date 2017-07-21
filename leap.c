#include <stdio.h>
void main()
{
		int year;
		printf("Enter year: ");
		scanf("%d",&year);
		if(year % 4 == 0)
		{
			if(year % 100 == 0)
			{
					year = year / 100;
					if(year % 4 == 0)
					{
						printf("1.Leap year\n");
					}
					else
					{
						printf("1.Not a leap year\n");
					}
			}
			
			else
			{
				printf("2.Leap year\n");
			}
		}

		else
		{
				printf("2.Year is not a leap year\n");
		}
}

		