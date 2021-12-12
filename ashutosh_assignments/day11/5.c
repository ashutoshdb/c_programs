#include<stdio.h>
void increment(int count);
int main()
{
int i =10;
static int j = 5;
register int k = 2;

        increment(i);
      	printf("for auto value  is %d\n", i);
        increment(i);
        printf("for auto value  is %d\n", i);
        
        increment(j);
      	printf("for static value  is %d\n", j);
        increment(j);
        printf("for static value  is %d\n", j);
        
        printf("for register value  is %d\n", k);






return 0;

}
void increment(int count)
{
      count++;
      printf("count is %d\n", count);
}
