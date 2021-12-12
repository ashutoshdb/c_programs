#include<stdio.h>

int main()
{
int arr[2][3] = {{2,3,3},{1,5,6}};
int i,n,j;


for(i =0; i<2;i++)
{
	for(j=0;j<3;j++)
	{
	printf("%d",*(*(arr+i)+j));
	printf("\n");
	}
}

return 0;
}
