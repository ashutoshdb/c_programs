// 6.	Write a program in C to find the prime numbers within a range of numbers.

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int s,e,flag;
    printf("Enter the range");
    scanf("%d,%d",&s,&e);
 
    while (s<=e)
    {
        flag = 0;
        for (int i = 2; i<s; i++)
        {
            if(s%i==0){
                flag=1;
                break;
            }
        }
        if (flag==0)
        {
            printf("%d",s);
        }
        s++;
    }    
    
    
    return 0;
}
