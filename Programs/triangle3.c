/*
9.	Write a C program to display the pattern like right angle triangle as shown pattern below.
1
2 3
4 5 6
7 8 9 10

*/
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int n, num =1;

    printf("Enter the number of terms: ");
    scanf("%d",&n);

    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j<=i; j++)
        {
            printf("%d ",num);
            num++;
        }
        printf("\n");
        
    }
    

    return 0;
}
