#include<stdio.h>

int
main ()
{
  int i, j, max, min, n;
  struct employee
  {
    int rollnumber;
    char name[10];
    char gender[10];
    int marks;
  } emp[10];
  struct employee *ptr = emp;

	for (i = 0; i < 3; i++)
	  {
	    printf ("Enter the Rollnumber \n");
	    scanf ("%d", &emp[i].rollnumber);

	    printf ("Enter the name \n");
	    scanf ("%s", emp[i].name);

	    printf ("Enter the gender \n");
	    scanf ("%s", ptr->gender);

	    printf ("Enter the marks \n");
	    scanf ("%d", &ptr->marks);

	    ptr++;

	  }

	for (i = 0; i < 3; i++)
	  {
	    printf ("Rollnumber = %d \n", emp[i].rollnumber);
	    printf ("name = %s\n", emp[i].name);
	    printf ("gender = %s \n", ptr->gender);
	    printf ("marks = %d \n", ptr->marks);

	    ptr++;
	  }

  return 0;
}
