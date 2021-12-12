#include<stdio.h>
int main()
{
char i;
int j,k;

printf("Enter the Special character");
scanf("%c",&i);

printf("Enter two operands:");
scanf("%d,%d",&j,&k);

switch(i)
{
	case '+':
		printf("%d + %d = %d",j,k,j+k);
		break;
	case'-':
		printf("%d - %d = %d",j,k,j-k);
		break;
	case'*':
		printf("%d * %d = %d",j,k,j*k);
		break;
	case'/':
		printf("%d / %d = %d",j,k,j/k);
		break;
	default:
		printf("ERROR!!");
}

return 0;
	
}
