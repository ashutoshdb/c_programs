#include<stdio.h>
int main()

{
struct employee {
	int n;
	char c;
}em1 = {10,'a'};

union emp
{

int n;
char c;
}x;

printf("%lu \n", sizeof(struct employee));
printf("%lu \n", sizeof(union emp));

printf("%d \n",em1.n);
printf("%c \n", em1.c);

x.n = 1;
printf("%d \n", x.n);
x.c = 'c';
printf("%c \n", x.c);
return 0;
}
