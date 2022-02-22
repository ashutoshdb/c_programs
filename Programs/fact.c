// Develop a C program to find factorial of a number N using for loop. 

#include<stdlib.h>
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num,result=1;

    printf("Enter the number");
    scanf("%d",&num);

    for(int i =1; i<=num;i++)
    result = result*i;

    printf("%d",result);
    return 0;
}
