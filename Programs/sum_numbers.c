// Develop a C program which adds all numbers from 1 to N, 
//except those which are divisible by 5. Implement this using for loop and continue statement. 

#include<stdio.h>
#include<stdlib.h>


int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the number");
    scanf("%d",&num);

    int sum=0;
    for(int i=1;i<=num; i++)
    {

        if(i%5==0){
            continue;
        }
        else{
       sum = sum+i;
        }

    }
    printf("sum:%d",sum);
    return 0;
}
