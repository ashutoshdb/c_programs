#include<stdio.h>
int
main ()
{

  int i, s, e, flag;

  printf ("Enter the start and end of series");
  scanf ("%d,%d", &s, &e);

  while (s <= e)
    {
      flag = 0;
      for (i = 2; i < s; i++)
	{
	  if (s % i == 0)
	    {
	      flag = 1;
	      break;

	    }
	}
      if (flag == 0)
	printf ("%d ", s);

      s++;
    }
}
