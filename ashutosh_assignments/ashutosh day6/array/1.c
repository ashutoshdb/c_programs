#include<stdio.h>

int main(){

int arr[10];
int sum=0,i,j,n;
printf("Enter the number of elements ");
scanf("%d",&n);

for(i=0; i<n;i++){
	printf("Enter the number");
	scanf("%d",&arr[i]);
}

for(j=0;j<n;j++)
{
	sum = sum +arr[j];
}
printf("sum is %d \n",sum);
return 0;

}
