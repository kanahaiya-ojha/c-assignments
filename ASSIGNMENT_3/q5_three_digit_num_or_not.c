//Write a program to check whether a given number is a three digit number or not
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a num:");
    scanf("%d",&num);
    if(num>99)
    printf("three digit num");
else
    printf("Not three Digit num");
    return 0;
}