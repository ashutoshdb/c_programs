// Write a C Program to Count the Number of Vowels, Consonants, digits and remaining characters in given string

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    char string[100];
    int vowels=0,consonent=0,digit=0,other=0;
    gets(string);

for (int i = 0; string[i]!='\0'; i++)
{
    if (string[i]== 'a' ||string[i]== 'e' || string[i]=='i'|| string[i]=='o'|| string[i]== 'u' )
    {
        vowels++;
    }
    else if(string[i] >= 'a' && string[i] <= 'z'){
        consonent++;
    }
    else if (string[i] >= '0' && string[i] <= '9')
    {
        digit++;
    }
    else
    other++;
    
}
puts(string);
printf("%d \n%d \n%d \n%d \n",vowels,consonent,digit,other);
    return 0;
}
