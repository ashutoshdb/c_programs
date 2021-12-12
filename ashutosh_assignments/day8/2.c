#include<stdio.h>

int main(){
int num = 10;
int * ptr;
ptr =&num;

printf("the number %d,%d \n",num,*ptr);


return 0;
}
