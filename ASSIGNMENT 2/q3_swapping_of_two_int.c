#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter 2 int:");
    scanf("%d%d",&a,&b);
    printf("Before swapping:%d and %d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("after swpping:%d and %d",a,b);
    return 0;
}