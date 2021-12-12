#include<stdio.h>
int main()
{
int n,i;
int x[8] = {10,20,30,40,50,60,70,80};


printf("the value of x is %d \n", x);
printf("the value of x is %d \n", x+2);
printf("the value of x is %d \n", *x);
printf("the value of x is %d \n", (*x+2));
printf("the value of x is %d \n", *(x+2));


return 0;
}


