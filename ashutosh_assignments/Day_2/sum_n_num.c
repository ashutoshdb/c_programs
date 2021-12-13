#include<stdio.h>
int main()
{
int x,i,sum=0;

printf("Enter the number:");
scanf("%d",&x);

for(i=1;i<=x;i++)
{
sum = sum+i;
};
printf("sum:%d",sum);
return 0;

}
