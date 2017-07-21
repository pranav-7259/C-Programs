#include <stdio.h>

void main()
{
	char s[10][10] = {"zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	int i,n,j,rev = 0,rem,count  = 0;

	printf("Enter number- ");
	scanf("%d",&n);

	while(n!=0)
	{
		rem = n%10;
		n/=10;
		rev = rev*10 + rem; 
		//count++;
	}

	//printf("%d\n", rev );

	//puts(s[0]);

	//printf("%d\n", count);
	while(rev!=0)
	{
		rem  = rev % 10;
		rev/=10;
		printf("%s ", s[rem]);
	}

}