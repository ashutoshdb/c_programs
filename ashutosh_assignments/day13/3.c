#include <stdio.h>
int main ()
{
  FILE *fp,*ptr;
  char name[50];
  int marks;
  int n,i;
  char str;
  
  
  ptr = fopen("2.txt","a");
  fp = fopen ("1.txt", "r");
  if (fp == NULL || ptr == NULL)
    {
      perror ("Error in opening file");
      return (-1);
    }
    
   while(fscanf(fp, "%s %d",name,&marks) != EOF){
    fprintf(ptr, "%s %d \n",name,marks);
    }
    fclose (fp);
    
     fp = fopen ("file4.txt", "r");
     if (fp == NULL)
    {
      perror ("Error in opening file");
      return (-1);
    }
    
   while(fgets(name,60,fp) != NULL){
    fputs(name,ptr);
    }
    fclose (fp);
     fclose (ptr);
     
     
     return 0;
     }

  

