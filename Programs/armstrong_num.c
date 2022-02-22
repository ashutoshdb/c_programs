// Write a Program to find if a given number is Armstrong number. 

#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int num,digit,r,sum=0;

printf("ENter the number");
scanf("%d",&num);
int temp = num;

while(num>0)
    {
    r = num % 10;
    //int p = pow(r,digit);
    sum = sum + (r*r*r);
    num = num/10;
    }
// printf("%d",sum);

if(sum == temp)
printf("Number is Armstrong Number");
else
printf("Number is not Armstrong Number");

    return 0;
}
