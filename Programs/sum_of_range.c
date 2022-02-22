//Write a program to find the sum of numbers in a given range.
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
  int s,e,sum=0;
  printf("Enter the range");
  scanf("%d,%d",&s,&e);

  for(int i=s;i<=e;i++)
  {
      sum = sum+i;
  }  
  printf("Sum is :%d",sum);
    return 0;
}
