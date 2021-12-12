			    ///* Day13. Assignment *///
//* P2. Write a program to implement "wc" utility of Linux *//

#include<stdio.h>
#include <stdlib.h>

int
main ()
{
  FILE *fp;

  char ch;
  int c = 0;
  int line = 0;
  int words = 0;
  // int space = 0;
  int number;


  fp = fopen ("text.txt", "r");

  if (fp == NULL)
    {
      perror ("Error in opening file");
      return (-1);
    }

  while (number != 5)
    {
      printf ("\n\n *********'WC' utility of linux************\n\n");
      printf ("press 1 to see no. of characters\n");
      printf ("press 2 to see no. of line\n");
      printf ("press 3 to see no. of words\n");
      // printf ("press 4 to see no. of space\n");
      printf ("press 4 to exit\n");
      printf ("Enter the number:=(1,2,3,4,5)\n");
      scanf ("%d", &number);

      while ((ch = fgetc (fp)) != EOF)
	{
	  if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
	    words++;
	  if (ch == 10 || ch == 0)
	    line++;
	  else
	    c++;
	}
      switch (number)
	{
	case 1:

	  printf ("\n no. of character=%d\n", c);
	  break;

	case 2:
	  printf ("\n no. of line=%d\n", line);
	  break;

	case 3:

	  printf ("\n no. of words=%d\n", words);
	  break;

	case 4:
	  exit (-1);

	}
    }



  fclose (fp);

  return 0;
}
