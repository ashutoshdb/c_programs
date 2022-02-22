// 4.	Write a C Program to Find Greatest Element in Array in one dimensional array 

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int num,temp;
    int *ptr;
    printf("Enter the number of terms in the array");
    scanf("%d",&num);

    ptr = (int *)malloc(num*sizeof(int));

    printf("Enter the elements");

for (int i = 0; i < num; i++)
{
    scanf("%d",ptr+i);
}
temp = *(ptr);
for (int i = 0; i < num; i++)
{
    printf("%d ",*(ptr+i));
    if(*(ptr+i)>temp)
    {
    temp = *(ptr+i);
    }
}

printf("largest number: %d",temp);

free(ptr);
    return 0;
}
