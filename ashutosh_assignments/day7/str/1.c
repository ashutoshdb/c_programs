#include<stdio.h>
#include<string.h>

int main(){

char str[20];
char str1[20];
char str2[20];

gets(str);
gets(str1);


printf("%d \n",strcmp(str,str1));
puts(strcat(str1,str));

printf("%d,%d \n",strlen(str),strlen(str1));

puts(strcpy(str2,str));
printf("%d \n",strstr(str,str1));
puts(str);
return 0;
}
