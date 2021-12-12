#include<stdio.h>
int main()
{
int n,i;
int arr[20];
printf("Enter the value of n");
scanf("%d",&n);

for(i=0;i<n;i++)
	{
	printf("Enter the value of the arr[%d]",i);
	scanf("%d",arr+i);
	}

for(i=0;i<n;i++)
{
	printf("%d ",*(arr+i));
}



return 0;
}


