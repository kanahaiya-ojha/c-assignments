//6. Write a function to calculate the factorial of a number. (TSRS)
#include<stdio.h>
int fact(int x);
int main()
{
    int n;
    printf("Enter num:\n");
    scanf("%d",&n);
    printf("factorial of %d is %d",n,fact(n));
    return 0;
}
int fact(int x)
{
    int f=1;
    for(int i=1;i<=x;i++)
    {
     f=f*i;
    }
    return f;
}