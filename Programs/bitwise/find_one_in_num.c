#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    
    unsigned int num = 13;
    Count(num);
  
    return 0;
}

void Count(int num){
      int one=0,zero=0;
      for (int i = 31; i>= 0; i--)
    {
        
        if( (1<<i) & num)
        one++;
        else
        zero++;
        
    }
 printf("1->%d,0->%d",one,zero);   
}