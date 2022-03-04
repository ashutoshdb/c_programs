 //  wap Copy string

 #include<stdio.h>
 #include<stdlib.h>
#include<string.h>
 int main(int argc, char const *argv[])
 {
     char string[20],string1[20];
     int i;

     gets(string);
     for (i = 0; string[i] != '\0'; i++)
     {
        string1[i] = string[i];
     }
     string1[i] = '\0';
     puts(string1);
    strcpy(string, string1);
    puts(string);
     return 0;
 }
 