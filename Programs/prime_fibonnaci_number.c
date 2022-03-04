#include<stdio.h>
#include<stdlib.h>

// 2.	Write a program to print the prime Fibonacci numbers in a given range.

int prime_number(int num)
{
    int flag =0;
    for (int i = 2; i < num; i++)
    {
        if(num%i ==0){
            flag = 1;
            break;
        }
    }
    return flag;
    
}
int main(int argc, char const *argv[])
{
    int s,e,n,z,sum;
    printf("Enter the numbers start and second number and number of term :");
    scanf("%d,%d,%d",&s,&e,&n);

for (int i = 0; i < n; i++)
{

    z= prime_number(s);
    if(z ==0)
    printf("%d ",s);
    sum = s+e;
    s=e;
    e=sum;
}
    return 0;
}
