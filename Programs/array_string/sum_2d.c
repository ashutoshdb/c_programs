#include<stdio.h>
// Write a C program to sum two 2-D matrices
int main()
{
int arr[2][3] = {{2,3,4},{5,6,7}};
int arr2[2][3] = {{1,2,44},{4,5,77}};
int i,j,n;


for(i=0;i<2;i++){

	for(j=0;j<3;j++){
	
	arr[i][j] = arr[i][j] + arr2[i][j];
	}
}


for(i=0;i<2;i++){

	for(j=0;j<3;j++){
	
	printf("%d \t", arr[i][j]);
	}
	printf("\n");
}



return 0;
}
