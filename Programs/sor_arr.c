// 6.	Write a C Program to sort elements in 1-D Array

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int n,temp,j=0;
    int *ptr;
    printf("ENter the number:");
    scanf("%d",&n);

    ptr = (int *)calloc(n, sizeof(int));

for (int i = 0; i < n; i++)
{
    scanf("%d",ptr+i);
}
for (int i = 0; i < n; i++)
{
printf("%d",*(ptr+i));
}

for (int i = 0; i < n; i++)
{
    for (j = i+1; j <n ; j++)
    {   
        if(*(ptr+i)>*(ptr+j)){
            temp = *(ptr+i);
            *(ptr+i)= *(ptr+j);
            *(ptr+j) = temp;
        }
    }
}
printf("sorted \n ");
for (int i = 0; i < n; i++)
{
printf("%d",*(ptr+i));
}


    return 0;
}
