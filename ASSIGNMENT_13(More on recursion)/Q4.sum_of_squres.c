// 4. Write a recursive function to calculate sum of squares of first n natural numbers
#include<stdio.h>
int sumSquares(int n)
{
    if(n==1)//first term is 1
    return 1;
    return n*n+sumSquares(n-1);
}

int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    printf("sum of squres is: %d",sumSquares(n));
    return 0;
}