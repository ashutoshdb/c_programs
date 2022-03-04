 // 1.	Write a C program to perform the Find the length of each string

 #include<stdio.h>
 #include<stdlib.h>
#include<string.h>

 int main(int argc, char const *argv[])
 {
     char string[100];
     int i=0;
     printf("Enter the String:");
     gets(string);

  while (string[i] != '\0')
  {
      i++;
  }
  printf("length of the string with %d,%d",i,strlen(string));
     return 0;
 }
 