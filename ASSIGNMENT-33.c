#include<stdio.h>
int main()
{
	int n,i,factorial=1;
	printf("Enter a number n to get factorial:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		factorial=factorial*i;
	}
printf("The factorial is: %d\n",factorial);
	return 0;
}