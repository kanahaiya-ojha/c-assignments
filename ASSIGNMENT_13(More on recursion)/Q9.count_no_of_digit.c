// 9. Write a program in C to count the digits of a given number using recursion.
#include<stdio.h>
int countDigit(int n)
{
    static int c=0;
    if(n==0)
    return c;
    else
    {
        c++;
        countDigit(n/10);
    }
}
int main()
{
    int n;
    printf("Enter a digit:");
    scanf("%d",&n);
    printf("digits are : %d ",countDigit(n));
    
    return 0;

}