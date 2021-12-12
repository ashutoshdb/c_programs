#include<stdio.h>
 void swap(int, int);

int main(){

int a,b;

printf("Enter the  numbers");
scanf("%d,%d", &a,&b);
swap(a,b);


return (0);


}
void swap(int a, int b)
{
	int temp;
	temp =a;
	a=b;
	b=temp;
	
	printf("swaped values are %d,%d \n",a,b);
	
	


}
