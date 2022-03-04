// 3.	Write a program to reverse an integer number. Use recursion.

#include<stdlib.h>
#include<stdio.h>
int sum=0;
int reverse( int num)
{
    int r;
    if (num)
    {
    r =num%10;
    sum = sum*10+r;
    // num = num/10;
    return (reverse(num/10));
    }  
    else
    return sum;
}

int main(int argc, char const *argv[])
{
    int  num,z;
    printf("Enter the number:");
    scanf("%d",&num);
    z = reverse(num);
    printf("reverse is: %d",z);
    return 0;
}
