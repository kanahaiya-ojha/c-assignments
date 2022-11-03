//Write a program to print greater between two numbers. Print one number if both are
//the same
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two num");
    scanf("%d%d",&a,&b);
    if(a>b)
    printf("greater num is %d",a);
    else
    printf("greater num is %d",b);
    return 0;
}