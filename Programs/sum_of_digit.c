// Write a program to calculate the sum of the digits of a given number.

#include<stdlib.h>
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    int sum=0;
    printf("ENter the Number");
    scanf("%d",&num);

    while (num>=1)
    {
        int r;
        r = num % 10;
        sum = sum +r;
        num = num/10;
    }
    printf("%d",sum);
    return 0;
}
