#include<stdio.h>
// 5.	Write a C Program to display three-dimensional array elements with addresses
int main()
{
int arr[3][3][3];
int i,j,k,n;


for(i=0;i<3;i++){

	for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				
				
			printf("the value at arr[%d][%d][%d]: ",i,j,k);
				scanf("%d",&arr[i][j][k]);
			}
	}
}

for(i=0;i<2;i++){

	for(j=0;j<3;j++){
			for(k=0;k<3;k++){
			
			printf("the address of %d is %p \n",arr[i][j][k],&arr[i][j][k]);	
			}
	}
}


return 0;
}
