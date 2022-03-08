// wap Reverse the string +++++

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char string[50];
    int len =0,temp;
    gets(string);

    len = strlen(string);
    printf("%d",len/2);

    for (int i = 0; i < len/2; i++)
    {
        temp = string[i];
           string[i] = string[len - i - 1];  
        string[len - i - 1] = temp;  
    }
    puts(string);
    



return 0;
}