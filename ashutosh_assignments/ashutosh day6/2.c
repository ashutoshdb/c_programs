#include<stdio.h>

int flag, j;
int prime_num (int num);
int
main ()
{

  int num1, num2, i, k, sum, n, z;

  printf ("Enter the nuber of the terms series");
  scanf ("%d", &n);

  printf ("Enter the first two numbes of the series");
  scanf ("%d,%d", &num1, &num2);
  printf (" num = %d,%d \n", num1, num2);

  for (i = 0; i < n; ++i)
    {

      z = prime_num (num1);
      if (z == 0)
	{
	  printf ("prime %d \n ", num1);
	}

      sum = num1 + num2;
      num1 = num2;
      num2 = sum;

    }

  return (0);

}

int
prime_num (int num1)
{
  flag = 0;
  for (j = 2; j < num1; j++)
    {
      if (num1 % j == 0)
	{
	  flag = 1;
	  break;
	}
      return flag;
    }

}
