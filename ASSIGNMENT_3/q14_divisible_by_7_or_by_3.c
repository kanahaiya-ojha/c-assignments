// 14. Write a program to check whether a given number is divisible by 7 or divisible by 3.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a num:");
    scanf("%d",num);
    if((num%7==0)||(num%3==0))
    printf("divisible by 3 or divisible by 2");
    else
    printf("not divisible by 7 or by 3");
    return 0;
    
}