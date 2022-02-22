// Write a program to remove the duplicate elements in an integer array.

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
    for ( j = i+1; j  < n; j  ++)
    {
        if(*(ptr+i) == *(ptr+j))
        {
            for (int k = j; k < n; k++)
            {
                *(ptr+k) = *(ptr+k+1);
            }
            n--;
	      j--;
            
    }
}
}
    
        for (int i = 0; i < n; i++)
        {
        printf("%d ",*(ptr+i));
        }
    return 0;
}
