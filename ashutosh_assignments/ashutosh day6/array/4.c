#include<stdio.h>
int main(){

int arr[50];
int i,j,n,gret;
printf("Enter the number of elements ");
scanf("%d",&n);

for(i=0; i<n;i++)
	{
	printf("Enter the number");
	scanf("%d",&arr[i]);
	}
gret = arr[0];
for(j=1; j<n;j++)
	{
	if(gret<arr[j])
		{
		gret =arr[j];
		}
	}
	printf("largest number of the array is %d \n",gret);

	}

