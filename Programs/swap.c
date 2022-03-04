// 5.	Write a function to swap contents of two variables using functions --> call by reference 


#include<stdio.h>
#include<stdlib.h>

void swap(int *num1, int *num2){
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num1 = temp;
    printf("Swap value inside the function:%d,%d \n",*num1,*num2);
}
int main(int argc, char const *argv[])
{
    int num1,num2;
    printf("enter the numbers");
    scanf("%d,%d",&num1,&num2);
    swap(&num1,&num2);
        printf("Swap value inside main the function: %d,%d \n",num1,num2);
    return 0;
}
