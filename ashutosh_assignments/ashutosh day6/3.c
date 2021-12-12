#include<stdio.h>
int rev=0;
int reverse(int);


int main(){

int num1,x;

printf("Enter the  numbers");
scanf("%d", &num1);
x = reverse(num1);
printf("%d", x);

return (0);


}
int reverse(int n)
{
	int r;
	if(n)
	{
	r =n%10;
	rev= rev*10+r;
	return (reverse(n/10));}
	else
	{
	return (rev);
	}

}
