#include<stdio.h>


int
main ()
{

  char arr[20];
  char arr1[20];
  char arr2[20];
  int i = 0, j = 0, k, flag = 0,temp;
  printf ("Enter the value of the strings ");

  gets (arr);
  gets (arr1);

  while (arr[i] != '\0')
    {
      i++;
    }
  while (arr1[j] != '\0')
    {
      j++;
    }
  printf ("the len of string 1 & string 2 is %d,%d \n", i, j);

  for (j = 0; arr1[j] != '\0'; j++, i++)
    {
      arr[i] = arr1[j];
    }
  arr[i] = '\0';
  puts (arr);

  for (k = 0; arr[k]!='\0'; k++)
    {

      for (j = 0; arr1[j] != '\0'; j++)
	{

	  if (arr[i] !=arr1[j])
	    {
	    flag = 1;
	    break;}
	}
	}
      if (flag == 0)
	{
	  printf ("strings are same \n");
	}
	else
		printf("strings are not same \n");

    
    for (i = 0; arr[i] != '\0'; i++) {
        arr2[i] = arr1[i];
    }
      arr2[i] = '\0';
    puts(arr2);
    
    
 for(k=0;k<i/2;k++)
 {
  	temp = arr[k];  
        arr[k] = arr[i - k - 1];  
        arr[i - k - 1] = temp;  
 }
 puts(arr);
 
  return 0;

}
