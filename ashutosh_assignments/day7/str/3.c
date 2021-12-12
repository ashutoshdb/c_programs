#include<stdio.h>
#include<ctype.h>
void upper(char str[]);
void lower(char str[]);
int i=0;
int main()
{

char str[10];
int a;
printf("Enter the string");
gets(str);

printf("Enter value of a = 1 if you want to convert in upper case and a=2 for lower case \n");
scanf("%d",&a);

if (a == 1)
	upper(str);
else if(a ==2) 
	lower(str);
else 
	printf("Wrong Choice");

return 0;

}

void upper(char str[])
{
while(str[i])
{
putchar(toupper(str[i]));
i++;
}
}

void lower(char str[])
{
while(str[i])
{
putchar(tolower(str[i]));
i++;
}
}
