#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    
    int temp;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    int val =num/2;
    for(i=0; i<val; i++)
    {
        temp = arr[i];
        arr[i] =arr[num-i];
        arr[num-i] = temp;  
    }
    
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
