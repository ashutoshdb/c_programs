#include<stdio.h>
#include <math.h>
int main(){

int n,r,i,m,temp,x,sum=0;

printf("Enter the number of digit and value");
scanf("%d,%d",&m,&n);

temp = n;
while(n>0){
	r = n%10;
	x = pow(r,m);
	sum = sum + x;
	n=n/10;
}

if(sum == temp)
{
printf("Number is Armstrong Number");
}
else
printf("Number is not Armstrong Number");


return 0;

}
