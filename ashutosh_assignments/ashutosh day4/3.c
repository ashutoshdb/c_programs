#include<stdio.h>
int main()
{

int i=1,n,sum=0;

printf("enter the value of n");
scanf("%d",&n);

while(i<=n)
	{ 
		if(i%2 != 0){
		sum = sum+i;
		}
		i++;
	}
	
printf("sum=%d \n",sum);
return 0;
}
