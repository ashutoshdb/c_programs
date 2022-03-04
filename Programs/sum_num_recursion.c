// 6.	Write a program to find the sum of first n positive integers using a recursive function

#include<stdio.h>
#include<stdlib.h>

int num_sum(int num){
if (num==1)
{
return 1;
}
else
{
    return (num + num_sum(num-1));
}



}
int main(int argc, char const *argv[])
{
    int num;
    printf("ENter the number");
    scanf("%d",&num);
    int sum = num_sum(num);
    printf("%d",sum);
    return 0;
}
