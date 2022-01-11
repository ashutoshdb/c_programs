#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a =5, b=3;

    printf("%d \n",a&b);
    printf("%d \n",a|b);
    printf("%d \n",a^b);
    

    int r,area;
    printf("Enter the value of radius:");
    scanf("%d",&r);

    area = 3.14*r*r;
    printf("Area: %d",area);
    return 0;
}
