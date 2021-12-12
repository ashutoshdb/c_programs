#include<stdio.h>
int main()
{
char i;

printf("Enter the value");
scanf("%c",&i);

if (i>=97 && i<=122)
	printf("Value is lower case \n");
else if(i>=65 && i <=90)
	printf("Value is upper case \n");
else if(i>=48 && i<=57)
	printf("value is digit \n");
else if (i ==32)
	printf("Value is whitespace\n");

return 0;
}
