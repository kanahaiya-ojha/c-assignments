// 13. Write a program to check whether a given number is divisible by 3 and divisible by 2
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a num:");
    scanf("%d",num);
    if((num%3==0)&&(num%2==0))
    printf("divisible by 3 and divisible by 2");
    else
    printf("not divisible by 3 and divisible by 2");
    return 0;
    
}