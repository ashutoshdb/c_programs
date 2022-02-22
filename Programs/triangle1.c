/* 7.	Write a program in C to display the pattern like right angle triangle as shown pattern below.
1
22
333
4444

*/
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number of rowws");
    scanf("%d",&n);

    for (int i =1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d",i);
        }

        printf("\n");
        
    }
    
    return 0;
}
