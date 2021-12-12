#include<stdio.h>
int main(){
int arr[10]= {10,20,30,40,50,60,70,80,90,100};
int n,i,flag= 0;


printf("Enetr the number you want to search in the string");
scanf("%d", &n);

for(i=0; i<10; i++)
{
if(*(arr+i) == n ){
flag =1;
}
}
if (flag == 1){
	printf("Number is in the string");
	
}
else
printf("number not in the string4ss");
return 0;
}
