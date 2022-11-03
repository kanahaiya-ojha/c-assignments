//1. Write a program to check whether a given number is positive or non positive
#include<stdio.h>
int main()
{
    float num;
    printf("Enter a num:");
    scanf("%f",&num);
    if(num>0)
    printf("Given num is positive");
    else if(num==0)
    printf("Given num is nutral");//zero is neither be positive nor be negative
    else
    printf("Given no is non positive");
    return 0;
}