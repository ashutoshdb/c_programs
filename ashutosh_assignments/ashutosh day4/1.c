#include<stdio.h>
int
main ()
{
  int i, n, sum = 0;

  printf ("Enter the value: ");
  scanf ("%d", &n);

  for (i = 1; i < n; i++)
    {
      if (i % 5 == 0)
	continue;
      else
	sum = sum + i;
    }

  printf ("sum = %d \n", sum);

  return 0;

}