//1. Write a program to calculate sum of first N natural numbers
#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter n=");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        count=count+i;
    }
     printf("sum of first %d naturalnum is=%d",n,count);
    return 0;
}