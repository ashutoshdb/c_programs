// Write a program to check whether a given number is odd or even
#include<stdio.h>
#include<stdlib.h>


int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the number you want to check:");
    scanf("%d",&num);
    if(num%2==0){
        printf("Number is Even Number!!");
    }
    else
    printf("Number is Odd!!");
    return 0;
}
