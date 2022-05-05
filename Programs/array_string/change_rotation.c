//  Write a program to print out all rotations of a string typed in.
// For eg:if the input is “Space”, the output should be: space paces acesp cespa espac.

#include<stdlib.h>
#include<stdio.h>

int main(int argc, char const *argv[])
{
    char string[100];
    gets(string);
    
    for (int i = 0; string[i] != '\0'; i++)
    {
        for (int j = i; string[j] != '\0'; j++)
        {
            printf("%c",string[j]);
        }
        for (int k = 0; k < i; k++)
        {
             printf("%c",string[k]);
        }
        
        printf("\n");
        
    }
    
    return 0;
}
