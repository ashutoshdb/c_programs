// Write a program to find out the sum of first n natural numbers.
// Take n as input from the user.

// natural number = 1,2.......
#include<stdio.h>
#include<stdlib.h>


int main(int argc, char const *argv[])
{
    int num,sum = 0;
    printf("Enter the Number");
    scanf("%d",&num);

    for(int i=1;i<=num;i++)
    {
        sum = sum+i;
    }
     printf("Sum of first %d natural number is:%d",num,sum);
    return 0;
}
