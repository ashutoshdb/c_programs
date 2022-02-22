// Write a C program to count the frequency of each number in a 1-D array.

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int n,count=0,i=0;
    int *ptr;

    printf("ENter the number of elements in the array: ");
    scanf("%d",&n);

    ptr = (int*)malloc(n*sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory not allocated");
    }
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d",ptr+i);
    }
    for (int j = 0; j <= 9; j++)
    {
        count = 0;
         for (i = 0; i < n; i++)
         {
            if (*(ptr+i) == j)
            {
                count++;
            }
         }
           printf("%d ->%d\n",j,count);

    }
    
    
    return 0;
}
