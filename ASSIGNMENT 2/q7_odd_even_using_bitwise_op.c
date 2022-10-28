#include<stdio.h>
int main()
{
    int x;
    printf("enter a num:");
    scanf("%d",&x);
   if ((x&1)==0)
    {
        printf("given no is even");
    }
    else
    {
        printf("given no is odd");
    }
    return 0;
}