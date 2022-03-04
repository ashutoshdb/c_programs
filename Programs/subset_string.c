//  •	Find whether string1 is the subset of the second string or not(strstr)

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char string[50], string1[50];

    gets(string);
    gets(string1);

printf("%d",strstr(string,string1)); // return 0 if string matches or 1
    return 0;
}
