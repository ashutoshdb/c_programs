#include<stdio.h>
int main()
{

int arr[10];
int i,j,n,a;
printf("Enter the number of elements ");
scanf("%d",&n);

for(i=0; i<n;i++)
	{
	printf("Enter the number");
	scanf("%d",&arr[i]);
	}

for(i=0;i<n;i++){
	for(j =i+1;j<n; j++)
	{
		if(arr[i]>arr[j])
		{
		a = arr[i];
		arr[i] =arr[j];
		arr[j] = a;
		}
	}

	}
for(i=0;i<n;i++)
printf("%d \n",arr[i]);


return 0;

	
}

