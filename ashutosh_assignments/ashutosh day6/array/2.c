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
for(j=0; j<=9;j++)
	{
	count =0;
	for(k=0; k<n;k++)
		{
		if(arr[k]==j)
			count++;
		}
	printf("%d count is %d \n",j,count);
	}
}
