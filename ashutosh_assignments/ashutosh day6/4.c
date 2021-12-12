#include<stdio.h>
long int fact(int);

int main(){

int num1;
long int x;

printf("Enter the  numbers");
scanf("%d", &num1);
x = fact(num1);
printf("%ld", x);

return (0);


}
long int fact(int n)
{
	if((n==1) || (n==0))
		return (1);
	else
	return (n*fact(n-1));


}
