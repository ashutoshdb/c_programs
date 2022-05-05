#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    char string[100];
    int j,i;
    gets(string);

for (i = 0; string[i] != '\0'; i++)
{
    while(!(string[i]>='a' && string[i]<='z') && !(string[i]>='A' && string[i]<='Z') && !(string[i] == '\0'))
    {
        for (j = i; string[j] != '\0'; j++)
        {   
            string[j]=string[j+1];
        }
        string[j] = '\0';
    }
}

    return 0;
}
