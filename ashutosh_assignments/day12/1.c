#include<stdio.h>
#include<stdlib.h>

int
main ()
{
  int n, i;
  typedef struct student
  {
    int id;
    char name[20];
    float percentage;
  } student;
  student *ptr;


  printf ("Enter the number of students");
  scanf ("%d", &n);

  ptr = (student *) malloc (n * sizeof (student));

  if (ptr == NULL)
    {
      printf ("Error! memory not allocated");
      exit (0);
    }


  printf ("Enter sudent deatils: \n");
  for (i = 0; i < n; i++)
    {
      printf ("Enter id:\n");
      scanf ("%d,", &(ptr + i)->id);
      printf ("Enter name \n");
      scanf ("%s,", (ptr + i)->name);
      printf ("Enter  percentage :\n");
      scanf ("%f", &(ptr + i)->percentage);
    }
    
  for (i = 0; i < n; i++)
    {
      if ((ptr + i)->percentage >= 75)
	{
	  printf ("%s is passed with Distinction \n", (ptr + i)->name);
	}
      else if ((ptr + i)->percentage >= 60 && (ptr + i)->percentage <= 74.99)
	{
	  printf ("%s is passed with First Grade \n", (ptr + i)->name);
	}
      else if ((ptr + i)->percentage >= 50.00
	       && (ptr + i)->percentage <= 59.99)
	{
	  printf ("%s is passed with Second grade \n", (ptr + i)->name);
	}
      else if ((ptr + i)->percentage >= 40.00
	       && (ptr + i)->percentage <= 49.99)
	{
	  printf ("%s is passed with Third grade \n", (ptr + i)->name);
	}
       else
         {
         printf ("%s is failed \n", (ptr + i)->name);
         } 
    }
    
    free(ptr);
  return 0;
}