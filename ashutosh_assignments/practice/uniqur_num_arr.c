#include<stdio.h>


int main()
{
int i,y;
int count=0;
int arr[5]={2,1,5,5,6};

for(i=0; i<5;i++)
{
int count=0;
    for(y=0; y<=5; y++)
    {
        if (i!=y)
        {
            if(arr[i] == arr[y])
            count++;

        }
    }


    if(count==0)
    {

        printf("%d",arr[i]);
    }

}

return 0;

}