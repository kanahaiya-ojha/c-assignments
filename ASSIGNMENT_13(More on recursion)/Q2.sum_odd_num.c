// 2. Write a recursive function to calculate sum of first N odd natural numbers
#include<stdio.h>
int SumOdd(int n)
{
    if(n==1)
    return 1; 
    return (2*n-1)+SumOdd(n-1);

}
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    printf("sum of odd num is: %d\n",SumOdd(n));
    return 0;
}