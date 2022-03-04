#include<stdio.h>
#include<stdlib.h>


// Write a program to find the GCD of two numbers.
int main(int argc, char const *argv[])
{
    int num1,num2,gcd;
    printf("Enter the Numbers:");
    scanf("%d,%d",&num1,&num2);
    for (int i = 1; i <= num1 && i<=num2; i++)
    {
        if (num1%i==0 && num2%i==0)
        {
            gcd = i;
        }
        
    }
        printf("gcd is: %d",gcd);       
    return 0;
}
