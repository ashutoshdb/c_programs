// Write a C Program to display one dimensional array elements with addresses

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int num;
    int *ptr;
    printf("Enter the number of terms");
    scanf("%d",&num);

    ptr = (int *)malloc(num*sizeof(int));
    printf("Enter the value");

    for (int i = 0; i < num; i++)
    {
        scanf("%d",ptr+i);
    }

    for (int i = 0; i < num; i++)
    {
        printf("%d --> %d \n",*(ptr+i),ptr+i);
    }
    free(ptr);
    return 0;
}
