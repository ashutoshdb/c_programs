#include <stdio.h>
int main ()
{
  FILE *fp;
  char name[50];
  int marks;
  int n,i;
  char str;
  
  
  fp = fopen ("1.txt", "a");
  if (fp == NULL)
    {
      perror ("Error in opening file");
      return (-1);
    }
    printf("enter the number of student");
    scanf("%d",&n);
   
  for (i=0;i<n;++i) {
		printf("For student%d\nEnter name: ",i+1);
		scanf("%s",name);
		printf("Enter marks: ");
		scanf("%d",&marks);
		fprintf(fp,"%s %d \n",name,marks);
	}	
  fclose (fp);
  
         fp = fopen ("1.txt", "r");
    
   while(fscanf(fp, "%s %d",name,&marks) != EOF){
   // fscanf(fp, "%s %d",name,&marks);
    printf("%s %d \n",name,marks);
    }
    fclose (fp);

  



  return (0);
}
