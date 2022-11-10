//6. Write a program to calculate factorial of a number
#include<stdio.h>
int main()
{
    int f,n;
    printf("Enter a num:");
    scanf("%d",&n);
     for(f=1;n>=1;n--)
     {

     f=f*n;
     }
     
   printf("fatorial is %d",f);

    return 0;
}
