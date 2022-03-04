#include<stdio.h>
// 2.	Write a C program to copy the elements of one 2-D array to another 2-D array.
int main()
{
int arr[2][3] = {{2,3,4},{5,6,7}};
int arr2[2][3]; 
int i,j,n;


for(i=0;i<2;i++){

	for(j=0;j<3;j++){
	
	arr2[i][j] = arr[i][j];
	
	printf("the value of both the array are %d,is %d \n",arr[i][j], arr2[i][j]);
	}
}


return 0;
}
