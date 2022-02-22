// 1.	Write a C program to find the sum of all array elements.
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int n,sum=0;
    int *ptr;
    int array[20];
    printf("Enter the number of element: ");
    scanf("%d",&n);
    ptr = (int*)malloc(n*sizeof(int));
    if (ptr ==NULL)
    {
        printf("Memory not allocated");
        exit(0);
    }
    printf("Enter the element of array");
    for (int i = 0; i <n; i++)
    {
        scanf("%d",ptr+i);
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + *(ptr+i);
    }

    printf("Sum: %d",sum);
    free(ptr);
 
    return 0;
}
