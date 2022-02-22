// Write a program to check whether the given number is perfect number or not.

#include<stdlib.h>
#include<stdio.h>


int main(int argc, char const *argv[])
{
    int num;
    int sum = 0;
    int i;
    scanf("%d",&num);
    for(i=1; i<num; i++)
    {
        if( num%i==0 )
        {
            sum = sum+i;
        }
    }
    // printf("%d",sum);
    if (num==sum)
    {
    printf("Number is perfect nummber");
    }
    else
    {
        printf("Number is not perfect nummber");
    }

    return 0;
}
