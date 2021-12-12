#include<stdio.h>
int main(){

int arr[50];
int sum=0,i,j,n,k,count;
printf("Enter the number of elements ");
scanf("%d",&n);

for(i=0; i<n;i++)
	{
	printf("Enter the number");
	scanf("%d",&arr[i]);
	}
for(j=0; j<n;j++)
	{
printf("the address of %d is %p \n",arr[j],&arr[j]);
	}
}
