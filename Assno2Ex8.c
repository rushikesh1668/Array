#include<stdio.h>

void main()
{
int i, num, even=0, odd=0;

printf("\nEnter any ten numbers: ");
for(i=0;i<10;i++)
{ 
 scanf("%d",&num);
if (num%2 == 0 && num>even)
even = num;
if( num%2 != 0 && num> odd)
odd = num;
}
printf("\n Largest even number is = %d",even);
printf("\n Largest odd number is = %d", odd);
getch();
}
