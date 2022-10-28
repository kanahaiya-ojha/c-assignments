#include<stdio.h>
int main()
{
    int x;
    printf("enter a three digit no. for right rotation:");
    scanf("%d",&x);
    x=(x%10)*100+x/10;
    printf("no after RR Rotation is %d:",x);
    return 0;
}