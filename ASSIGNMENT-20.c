#include<stdio.h>
int main()
{
	int a;
    printf("Enter a number:");
	scanf("%d",&a);
	if(a>=0)
	{
		printf("%d is a whole number",a);
	}
	else
	{
		printf("%d is not a whole number",a);
	}
	return 0;
}