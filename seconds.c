#include <stdio.h>

struct time
{
	int h,m,s;
};

void main()
{
	struct time t[5];
	int seconds[5],i;
	printf("Enter hours,minutes,seconds (5 time)- ");
	for(i=0;i<5;i++)
		scanf("%d %d %d",&t[i].h,&t[i].m,&t[i].s);
	for(i=0;i<5;i++)
		seconds[i] = t[i].h*3600 + t[i].m*60 + t[i].s;

	for(i=0;i<5;i++)
		printf("%d ", seconds[i] ); 

}