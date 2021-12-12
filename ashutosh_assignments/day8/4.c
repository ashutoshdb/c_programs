#include<stdio.h>
void swap(int *,int *);
int temp;
int main()
{

int a,b;

printf("Enter two numbers of a,b ");
scanf("%d,%d",&a,&b);
printf("two numbers are %d, %d \n", a,b);
swap(&a,&b);

printf("two numbers are %d, %d \n", a,b);

return 0;
}

void swap(int * x,int * y){

temp = *x;
*x = *y;
*y = temp;

printf("swapped values are %d,%d \n",*x,*y);
}
