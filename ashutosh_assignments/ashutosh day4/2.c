#include<stdio.h>
int main()
{

int i,n;
long long int fact=1;


printf("Enter the Number: ");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
fact = fact*i;
}
	
	
printf("factorial is %lld \n", fact);

}
