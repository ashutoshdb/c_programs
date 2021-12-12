#include<stdio.h>
int main()
{
int n,i;
int arr[20];
int arr1[20];
printf("Enter the value of n");
scanf("%d",&n);

for(i=0;i<n;i++)
	{
	printf("Enter the value of the arr[%d]",i);
	scanf("%d",arr+i);
	}

for(i=0;i<n;i++)
{
	*(arr1+i) = *(arr+i);
}

for(i=0;i<n;i++)
{
	printf("%d ",*(arr1+i));
}



return 0;
}


