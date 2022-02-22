 // Write a C program to display the first n terms of Fibonacci series. 4




 #include<stdio.h>
 #include<stdlib.h>

 int main(int argc, char const *argv[])
 {
     int i,n,f=0,s=1,sum;

     printf("Enter the Number of terms in the series");
     scanf("%d",&n);

     for ( i = 1; i <=n; i++)
     {
        printf("%d ",f);
        sum = f +s;
        f=s;
        s =sum;
     }
     
     return 0;
 }
 