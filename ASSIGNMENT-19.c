#include<stdio.h>
int main()
{
	int a;
    printf("Enter a number 0 or 1:");
	scanf("%d",&a);
	if(a==1)
	{
		printf("Result is Head");
	}
	else
	{
		printf("Result is Tail");
	}
	return 0;
}