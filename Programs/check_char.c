/* Write a program to test given character  is
• lower case letter
• upper case letter 
• digit 
• white space (includes space, tab,new line)
*/
#include<stdlib.h>
#include<stdio.h>
int main(int argc, char const *argv[])
{   char num;

    printf("Enter the char or number:");
    scanf("%c",&num);

    if(num>=97 && num<=122){
        printf("Char is lowercase!!");
    }
    else if(num>=65 && num<=90){
        printf("Char is uppercase!!");
    }
    else if(num>=48 && num<=57){
        printf("Char is digit!!");
    }
    else if(num== ' ' || num==9 || num==10){
        printf("Char is whitespace!!");
    }
    else{
        printf("wrong Input");
    }
    return 0;
}
