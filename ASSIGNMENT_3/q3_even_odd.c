// 3. Write a program to check whether a given number is an even number or an odd
// number.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a num:");
    scanf("%d",&num);
    if(num%2==0)
    printf("Given num is even");
    else
    printf("Given num is odd");
    return 0;
}