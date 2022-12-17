// 5. Write a recursive function to calculate sum of digits of a given number
#include<stdio.h>
int sumDigit(int n)
{
    if(n%10==n)//base condition if 2%10==10-->2
    return n;
    return (n%10)+sumDigit(n/10);
}
int main()
{
    int n;
    printf("Enter digit:");
    scanf("%d",&n);
    printf("sum of digits of %d is : %d",n,sumDigit(n));
    return 0;
}