#include<stdio.h>
int main(){

int arr[50];
int i,j,n;
printf("Enter the number of elements ");
scanf("%d",&n);

for(i=0; i<n;i++)
	{
	printf("Enter the number");
	scanf("%d",&arr[i]);
	}

for(j=n-1; j>=0;j--)
{
printf("%d ",arr[j]);
}


	}

