/* Write a program to create a simple calculator to perform Addition, Subtraction,
Multiplication and Division using switch statement.
Take the required operation as input from the user.
*/
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int num1,num2;
    char i;
     printf("Select operator");
    scanf("%c",&i);
    printf("Enter numbers to operate:");
    scanf("%d,%d",&num1,&num2);

    switch (i)
    {
    case '+':
        printf("Sum is :%d \n",num2+num1);
        break;
    case '-':
        printf("Sub is :%d \n",num2-num1);
        break;
    case '*':
        printf("Mul is :%d \n",num2*num1);
        break;
    case '/':
        printf("Div is :%d \n",num2/num1);
        break;
    }

    return 0;
}
