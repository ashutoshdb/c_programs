// Write a program to find whether given number is palindrome or not.
//  that remains the same when its digits are reversed
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int n,sum=0,r,temp;
    printf("Enter the Number:");
    scanf("%d",&n);
    temp = n;
    while (n>0)       
    {
         r = n%10;
         sum = sum*10 + r;
         n = n/10;
    }
    printf("sum:%d",sum);

    if (n=sum)
    {
        printf("Number is Palindrome");
    }
    else{
        printf("Number is not Palindrome");
    }
    
    
    return 0;
}
