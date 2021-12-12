#include<stdio.h>
int main(){

int i = 10;
char j='a';
float c = 1.5;
double d = 56;

printf("the address of %d is %u and %p \n",i,&i,&i);
printf("the address of %c is %u and %p \n",j,&j,&j);
printf("the address of %f is %u and %p \n",c,&c,&c);
printf("the address of %lf is %u and %p \n",d,&d,&d);



return 0;

}
