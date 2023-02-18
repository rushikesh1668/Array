#include <stdio.h>

void main() 
{
   int num1, num2, num3, small, smaller, smallest;
   
  
   printf("Enter 3 Numbers : ");
   scanf("%d %d %d", &num1, &num2, &num3);
 
   if(num1>=num2 && num1>=num3)
   {
	   	if(num2>=num3)
	   	{
	   		printf("Descending: %d %d %d", num1, num2, num3);
		}
		else
		{
			printf("Descending: %d %d %d", num1, num3, num2);
	}
   } 

  
   else if(num2>=num1 && num2>=num3)
   {
	   	if(num1>=num3)
	   	{
	   		printf("Descending: %d %d %d", num2, num1, num3);
		}
		else
		{
			printf("Descending: %d %d %d", num2, num3, num1);
	}
   } 
   
   else
   {
   		if(num2>=num1)
	   	{
	   		printf("Descending: %d %d %d", num3, num2, num1);
		}
		else
		{
			printf("Descending: %d %d %d", num3, num1, num2);
		}
   }
   
}
