#include <stdio.h>
void main()
{
		int year, flag = 1;
		printf("Enter year: ");
		scanf("%d",&year);




		if(year % 4 == 0)
		{
			if(year % 100 == 0 && year % 400 != 0)
			{
				flag = 0;
			}
		}

		else
		{
			flag  = 0; 
		}





		if(flag == 0)
		{
			printf("Not leap\n");
		}
		
		else
		{
			printf("Leap\n");
		}

}