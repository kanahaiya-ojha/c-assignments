// 3. Write a recursive function to calculate sum of first N even natural numbers
#include<stdio.h>
int someEven(int n)
{
    if(n==1)
    return 2;
    return 2*n+someEven(n-1);
}
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    printf("sum of even numbers is : %d",someEven(n));
    return 0;
}