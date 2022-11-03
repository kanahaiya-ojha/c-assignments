#include<stdio.h>
int main()
{
    float num;
    printf("Enter a num:");
    scanf("%f",&num);
    if(num>0)
    printf("Given num is positive");
    else if(num==0)
    printf("Given num is zero");//zero is neither be positive nor be negative
    else
    printf("Given no is negative");
    return 0;
}