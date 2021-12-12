#include<stdio.h>

int main()
{
int i = 10;
int *ptr = &i;
int **pptr = &ptr;


printf("%p \n ",&i);

printf("%p \n",ptr);

printf("%p \n ",*pptr);

printf("%p \n",pptr);

printf("%d \n",i);

printf("%d \n",*ptr);

printf("%d \n",**pptr);


return 0;

}

