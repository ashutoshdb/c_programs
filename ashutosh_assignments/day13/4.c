#include<stdio.h>


int
main ()
{
  int a = 0, e = 0, i = 0, o = 0, u = 0, other = 0, count = 0;
  char c;
  FILE *fp;

  fp = fopen ("3.txt", "r");

  if (fp == NULL)
    {
      perror ("Error opening file");
      return (-1);
    }

  do
    {
      c = fgetc (fp);
      count++;
      if (c == EOF)
	break;
      else if (c == 'a')
	a++;
      else if (c == 'e')
	e++;
      else if (c == 'i')
	i++;
      else if (c == 'o')
	o++;
      else if (c == 'u')
	u++;
      else
	other++;

    }
  while (1);
  printf ("%d,%d,%d,%d,%d,%d \n", a, e, i, o, u, other);
    printf ("%d%,%d%,%d%,%d%,%d%,%d% \n", (a * 100) / count,
	    (e * 100) / count, (i * 100) / count, (o * 100) / count,
	    (u * 100) / count, (other * 100) / count);
	    fclose (fp);
  return (0);
}
