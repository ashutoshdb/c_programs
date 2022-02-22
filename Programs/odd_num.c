// Develop a C program to find sum of all odd numbers upto N using while loop. 

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the number");
    scanf("%d",&num);

    for(int i = 2; i<=num; i++)
    {
        if(i%2!=0)
        {
            printf("%d",i);
        }
    }
    return 0;
}
