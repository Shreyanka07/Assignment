#include<stdio.h>
   int main(){
   int age;
   int eligible;
   printf(" Enter your age:");
   scanf("%d",&age);
   eligible=(age >= 18) ? 1:0;
   switch(eligible){
   case 1:
   	printf("You are eligible to vote.\n");
   	break;
   case 0:
   	printf("You are not eligible to vote.\n");
   	break;
   default:
   	printf("Invalid input.\n");	
       }
       return 0;	
   }	
