//9. Write a program to print cubes of the first n natural numbers
#include<stdio.h>
int main()
{
     int n;
    printf("Enter n=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%dx%dx%d=%d\n",i,i,i,i*i*i);
    }
    return 0;
}