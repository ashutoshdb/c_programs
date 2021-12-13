#include<stdio.h>
int main()
{
int i;

printf("Enter the value of the Number:");
scanf("%d",&i);

if(i%2 == 0)
	printf("%d is Even Number",i);
else
printf("%d is Odd Number",i);

}
