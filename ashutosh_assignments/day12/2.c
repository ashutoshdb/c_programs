#include<stdio.h>


int main(int argc, char *argv[])
{
int max,min,i;
 for (i = 1; i < argc; i++)
    if(atoi(argv[0])>atoi(argv[i]))
    {
    max = atoi(argv[i]);
    }
     for (i = 1; i < argc; i++)
    if(atoi(argv[0])<atoi(argv[i]))
    {
    	min = atoi(argv[i]);
    }
   printf("max and min of the aruguements is : %d,%d",max,min);
    


}
