// wap Compare two strings

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char string[50],string1[50];
    int flag =0;

    gets(string);
    gets(string1);

    for (int i = 0; string[i] != '\0'; i++)
    {
        for (int j = 0; string1[j] !=  '\0'; j++)
        {

            if (string[i] !=string1[j])
            {
                flag = 1;
                break;
            }
            
        }
        
    }
    if (flag == 0)
    {
        printf(" string are same \n");
    }
    else
    {
        printf(" string are  not same \n");
    }
    
    printf("%d \n",strcmp(string,string1)); // 0 on equal 1 false 
    
    return 0;
}
