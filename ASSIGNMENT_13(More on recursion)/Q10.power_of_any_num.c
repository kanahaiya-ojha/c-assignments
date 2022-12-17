// 10. Write a program in C to calculate the power of any number using recursion
#include<stdio.h>
int poW(int n,int p)
{
    if(p==1)
    return n;
    else
    return n*poW(n,p-1);
    
    
}
int main()
{
    int n,p;
    printf("Enter a number:");
    scanf("%d %d",&n,&p);
    printf("power of %d is :%d",n,poW(n,p));
    return 0;
}