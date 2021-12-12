#include<stdio.h>
int
main ()
{

  int arr[10];
  int i, j, n, a, k;
  printf ("Enter the number of elements ");
  scanf ("%d", &n);

  for (i = 0; i < n; i++)
    {
      printf ("Enter the number");
      scanf ("%d", &arr[i]);
    }

  for (i = 0; i < n; i++)
    {
      for (j = i + 1; j < n; j++)
	{
	  if (arr[i] == arr[j])
	    {
	      for (k = j; k < n; k++)
		{
		  arr[k] = arr[k + 1];
		}
	      n--;
	      j--;
	    }

	}
    }
  for (i = 0; i < n; i++)
    {
      printf ("array without duplicates is %d ", arr[i]);
    }



  return 0;


}
