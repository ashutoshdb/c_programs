// 6.	Write a program in C to find the prime number


#include<stdio.h>
#include<stdlib.h>



int main(int argc, char const *argv[])
{
    int n,flag,i;
    printf("Enter the number");
    scanf("%d",&n);

    for(i = 2; i<n; i++)
    {
        flag=0;
        if(n%i==0){
            flag = 1;
            break;
        }
    }
        if (flag == 0)
	printf ("prime number %d ", n);
    else
    printf ("not a prime number %d ", n);

    return 0;
}
