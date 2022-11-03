// 9. Write a program to find the greatest among three given numbers. Print number once
// if the greatest number appears two or three times.

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a,b and c:");
    scanf("%d %d %d",&a,&b,&c);
    if((a>b)&&(a>c))
    printf("%d is greratest",a);
    else if((b>a)&&(a>c))
    printf("%d is greratest",b);
    else
    printf("%d is greratest",c);
    return 0;
    
    
}