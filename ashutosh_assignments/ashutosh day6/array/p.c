#include<stdio.h>

int main()
{

int i,j,k,num;
int arr[50];


printf("array size]");
scanf("%d",&num);


for(i=0;i<num;i++){
scanf("%d",(arr+i));
}





for(i=0;i<num;i++)
{
for(j=i+1;j<num;j++)
{
	if(*(arr+i)==*(arr+j))
	{
	for(k=j;k<num;k++)
	{
	*(arr+k)=*(arr+k+1);
	}
	num--;
	j--;
	}
}
}

for(i=0;i<num;i++){
printf("%d", *(arr+i));
}



return 0;
}
