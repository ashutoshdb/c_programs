#include<stdio.h>
// 1.	Write a C Program to display two-dimensional array elements with addresses

int main()
{
int arr[2][3] = {{2,3,4},{5,6,7}};
int i,j,n;


for(i=0;i<2;i++){

	for(j=0;j<3;j++){
	
	printf("the address of %d,is %p \n",arr[i][j], &arr[i][j]);
	}
}


return 0;
}
