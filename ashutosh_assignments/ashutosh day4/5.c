#include<stdio.h>
int main()
{

int i,n,temp,r,rev=0;

printf("Enterthe Number");
scanf("%d", &n);

temp = n;

while(n>0){
rev = rev*10;
r =n%10;
rev = rev+r;
n=n/10;
}
if(temp == rev){
printf("Number is a Palindrome Number");
}
else
printf("Number is a not Palindrome Number");

return 0;
}
