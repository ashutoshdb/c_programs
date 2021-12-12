#include<stdio.h>

int main()
{
int s,sum,e,n,i=1;

printf("Enter the  number of terms,start term,second term");
scanf("%d,%d,%d",&n,&s,&e);

while(i<=n){
printf("%d ",s);
sum= s+e;
s=e;
e=sum;

i++;
}

return 0;
}
