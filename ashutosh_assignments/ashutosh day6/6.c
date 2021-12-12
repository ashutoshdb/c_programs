#include<stdio.h>
long int sum;
long int sum_num(int);

int main(){

int num1;
long int x;

printf("Enter the  numbers");
scanf("%d", &num1);
x = sum_num(num1);
printf("%ld", x);

return (0);


}
long int sum_num(int n)
{
	
	if(n==0)
		return 0;
	else
	return  (n+sum_num(n-1));


}
