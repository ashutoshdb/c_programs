#include<stdio.h>
int main()
{

int n,r,i,sum=0;

printf("Enter the number:");
scanf("%d",&n);

for(i=1;i<n;i++)
{
	r = n%i;
	if (r==0){
	sum = sum +i;
}
	
}
if (n == sum)
{
	printf("Number is Perfect Number");
}
else
{
	printf("Number is Not perfect number");
}

// printf("%d",sum);
return 0;
}
