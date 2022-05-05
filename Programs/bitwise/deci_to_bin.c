#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    
    unsigned int num = 13;
    bin2(num);
  
    return 0;
}

void bin2(int num){
      for (int i = 31; i>= 0; i--)
    {
        if( (1<<i) & num)
        printf("1");
        else
        printf("0");
    }
    
}