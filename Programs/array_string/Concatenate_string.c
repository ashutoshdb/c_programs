// 2.	Write a C program to perform Concatenate two strings

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char *ptr1, *ptr;
    int length =0;
    ptr = (char *)malloc(50 * sizeof(char));
    gets(ptr);
    ptr1 = (char *)malloc(50 * sizeof(char));
    gets(ptr1);

    length = strlen(ptr); // length of the first string



    for (int i = 0; *( ptr1 + i) != '\0'; i++)
    {
        *(ptr + length) = *(ptr1 + i);
        length++;
    }
     *(ptr + length) = '\0';



   
 puts(ptr); // printing the concatenated string
 ///////
strcat(ptr,ptr1);
/////////
puts(ptr);


free(ptr1);
free(ptr);
    return 0;
}
