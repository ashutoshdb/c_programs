#include<stdio.h>


int main()
{
int vowels=0,consonants=0,digit=0,symbols=0,i;
char str[10];
printf("Enter the string");
gets(str);

for(i=0; *(str+i)!=0;i++)
{

if(*(str+i) == 'i' || *(str+i) =='o' || *(str+i) == 'a' ||*(str+i) == 'e' || *(str+i) == 'u'){
vowels++;
}
else if(*(str+i) >='a' && *(str+i) <='z')
{
consonants++;
}
else if(*(str+i) >='0' && *(str+i)<='9'){
digit ++;
}
else
 symbols++;

}


printf("vowels=%d \nconsonants=%d \ndigit=%d \nsymbols=%d \n",vowels,consonants,digit,symbols);
}
