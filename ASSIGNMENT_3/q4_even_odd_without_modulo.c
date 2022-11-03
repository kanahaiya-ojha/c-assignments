// 4. Write a program to check whether a given number is an even number or an odd
// number without using % operator
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a num:");
    scanf("%d",&num);
    if(num&1==1)
    {
     printf("Given num is odd");
    }
    else
    printf("Given num is even");
    return 0;
}