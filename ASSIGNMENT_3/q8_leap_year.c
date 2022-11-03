//Write a program to check whether a given year is a leap year or not.

#include<stdio.h>
int main()
{
    int year;
    printf("Enter year:\n");
    scanf("%d",&year);
    if(year%400==0||year%100!=0 && year%4==0)
    printf(" leap year\n");
    else
    printf("Not leap year\n");
    return 0;
    
}