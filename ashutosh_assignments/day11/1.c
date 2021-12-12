#include<stdio.h>
#include <stdlib.h>


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
  } emp[5];
  struct employee *ptr = emp;


while(1){

  printf ("Enter value for the following operations\n"
	  "1. for entering the input  \n"
	  "2. View all student records \n"
	  "3. Show student who gets the maximum score \n"
	  "4. Show student who gets the minimum score \n"
	  "5. Exit");
	 scanf("%d",&n);


  switch (n)
    {
    case 1:
      {
	for (i = 0; i < 5; i++)
	  {
	    printf ("Enter the Rollnumber \n");
	    scanf ("%d", &emp[i].rollnumber);

	    printf ("Enter the name \n");
	    scanf ("%s", emp[i].name);

	    printf ("Enter the gender \n");
	    scanf ("%s", emp[i].gender);

	    printf ("Enter the marks \n");
	    scanf ("%d", &emp[i].marks);

	  }
	break;
      }
    case 2:
      {
	for (i = 0; i < 5; i++)
	  {
	    printf ("Rollnumber = %d \n", ptr->rollnumber);
	    printf ("name = %s\n", ptr->name);
	    printf ("gender = %s \n", emp[i].gender);
	    printf ("marks = %d \n", emp[i].marks);

	  ptr++;
	  }
	break;
      }
    case 3:
      {
	max = emp[0].marks;
	for (i = 1; i < 5; i++)
	  {
	    if (max < emp[i].marks)
	      {

		max = emp[i].marks;
	      }
	  }
	printf ("max  is %d \n", max);
	break;
      }
    case 4:
      {
	min = emp[0].marks;
	for (i = 1; i < 5; i++)
	  {
	    if (min > emp[i].marks)
	      {

		min = emp[i].marks;
	      }

	  }
	printf ("min is %d \n", min);
	break;
      }
      case 5 :
      		exit(0);
    }
}
  return 0;
}
