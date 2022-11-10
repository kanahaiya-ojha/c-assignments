//4. Write a program to calculate sum of squares of first N natural numbers
#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter n=");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        count=count+i*i;
    }
     printf("sum of squres of first %d natural num is=%d",n,count);
    return 0;
}