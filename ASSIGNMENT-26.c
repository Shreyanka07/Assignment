#include<stdio.h>
int main()
{
char operato;
	double num1,num2,result;
	printf("Enter an operator(+,-,*,/):");
	scanf("%c",&operato);
	printf("Enter first number:");
	scanf("%lf",&num1);
	printf("Enter second number:");
	scanf("%lf",&num2);
	switch (operato)
	{
		case '+':
		result=num1+num2;
		printf("Result:%.2lf\n",result);
		break;
		case '-':
		result=num1-num2;
		printf("Result:%.2lf\n",result);
		break;
		case '*':
		result=num1*num2;
		printf("Result:%.2lf\n",result);
		break;
		case '/':
		if (num2!=0){
		result=num1/num2;
		printf("Result:%.2lf\n",result);
	}
	    else
		printf("Error:Division by zero is not allowed.\n");
	
	break;default:
		printf("Error: invalid operator.\n");
			}
		return 0;
}
