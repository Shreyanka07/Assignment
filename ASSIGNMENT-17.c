#include<stdio.h>
int main()
{
	int n;
	printf("Enter an integer:");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("The given number is Even");
	}
	else
	{
		printf("The given number is Odd");
	}
	return 0;
}