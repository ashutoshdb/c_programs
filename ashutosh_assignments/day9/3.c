#include<stdio.h>
int i = 0, len = 0, j = 0;
int length (char *str);
void copy (char *arr, char *str);
void concat (char *str, char *str1);
int cmp (char *str, char *str1);
int
main ()
{
  int x, y, z;
  char str1[10];
  char str2[10];
  char arr[10];

  printf ("Enter the strings \n");
  gets (str1);
  gets (str2);

  x = length (str1);
  y = length (str2);
  printf ("%d \n", x);
  printf ("%d \n", y);
  
  
  z = cmp (str1, str2);
  printf (" the diff. between characters is %d \n", z);
  
  
  copy (arr, str1);
  printf ("copied array is :");
  puts (arr);
  
  
  concat (str1, str2);
  puts (str1);
 
  return 0;
}

int
length (char *str)
{
  int i = 0, len = 0;
  while (*str != '\0')
    {
      len++;
      str++;
    }
  return len;
}

void
copy (char *arr, char *str)
{
  while (*str)
    {
      *arr = *str;
      arr++;
      str++;

    }
  *arr = '\0';

}

void
concat (char *str, char *str1)
{

  int len;

  len = length (str);

  for (i = 0; *str1 != '\0'; i++)
    {
      *(str + len) = *str1;
      len++;
      str1++;

    }
  *(str + len) = '\0';


}

int cmp (char *str, char *str1)
{
  for (i = 0; *str1 != '\0'; i++)
    {
      for (j = 0; *str != '\0'; j++)
	{
	  if (*(str + j) != *(str1 + i))
	    return (*(str + j) - *(str1 + i));
	  else
	    return 0;

	}

    }



}
