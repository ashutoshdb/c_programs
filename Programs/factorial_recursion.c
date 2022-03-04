// 4.	Write a recursive function to find factorial of a number. 

#include<stdio.h>
#include<stdlib.h>
int factorial(int num){
    if(num<=1)
    {
        return 1;
    }
    else
    {
        return(num *factorial(num-1));
    }
}
int main(int argc, char const *argv[])
{
    int num,z;
 printf("enter the number:");
 scanf("%d",&num);
 z=factorial(num);

 printf("%d",z);
    return 0;
}
