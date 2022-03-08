//  3.	Write a program to convert lower case string to upper case string and vice versa. 

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    char string[100];
    printf("Enter the string");
    gets(string);
    for (int i = 0; string[i]  !='\0'; i++)
    {
        string[i] = string[i]- 32;
        // printf("%d",string[i]);
    }
    puts(string);
    return 0;
}
