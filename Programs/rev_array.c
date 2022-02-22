// Write a C Program to Reversing the 1-D Array Elements 

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    // 123456
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
int i = n-1;
while (j<i)
{
     temp = *(ptr+j);
    *(ptr+j) = *(ptr+i);
    *(ptr+i) = temp;
        j++;
        i--;   
}

printf("reversed \n\n");

for (int i = 0; i < n; i++)
{
printf("%d",*(ptr+i));
}




    return 0;
}
