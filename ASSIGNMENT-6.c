#include<stdio.h>
int main()
{
	float p,r,t,i;
	printf("Enter the principal amount:");
	scanf("%f",&p);
	printf("Enter the rate of interest:");
	scanf("%f",&r);
	printf("Enter the time:");
	scanf("%f",&t);
	i=(p*r*t)/100;
	printf("The interest is:%.2f\n",i);
	return 0;
}
