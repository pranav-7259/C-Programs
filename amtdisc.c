#include<stdio.h>

void main()
{
	float amt,d,net;
	printf("Enter the amount of your purchase and the discount percentage- ");
	scanf("%f %f",&amt,&d);
	net = amt - (amt*0.01*d);
	printf("The amount was %f and the amount after discount is %f",amt,net);
}