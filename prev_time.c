#include <stdio.h>

struct time
{
	int h,m,s;
};

void main()
{
	struct time t;
	printf("Enter hours,minutes,seconds- ");
	scanf("%d:%d:%d",&t.h,&t.m,&t.s);
	t.s--;
	if(t.s<0)
	{
		t.s = 59;
		t.m--;
		if(t.m<0)
		{
			t.m=59;
			t.h--;
		}
		if(t.h<0)
		{
			t.h = 23;
			
		}
	}

	printf("The time is %d:%d:%d",t.h,t.m,t.s);

}