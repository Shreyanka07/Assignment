#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a number:");
	scanf("%d",&a);
	printf("Enter a number:");
	scanf("%d",&b);
	printf("Enter a number:");
	scanf("%d",&c);
	if(a>b && b>c)
	{
		printf("a is the greatest number");
	}
	else if (b>a && b>c)
	{
		printf("b is the greatest number");
	}
	else 
	{
		printf("c is the greatest number");
	}
	return 0;
}