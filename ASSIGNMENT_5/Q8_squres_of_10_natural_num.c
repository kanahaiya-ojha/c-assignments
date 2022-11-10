//8. Write a program to print squares of the first n natural numbers
#include<stdio.h>
int main()
{
     int n;
    printf("Enter n=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%dx%d=%d\n",i,i,i*i);
    }
    return 0;
}