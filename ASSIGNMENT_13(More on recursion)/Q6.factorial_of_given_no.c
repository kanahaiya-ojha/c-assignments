// 6. Write a recursive function to calculate factorial of a given number
#include<stdio.h>
int fact(int n)
{
    if(n==0||n==1)
    return 1;

    return n*fact(n-1);
}
int main()
{
    int n;
    printf("Enter num for factorial:");
    scanf("%d",&n);
    printf("factorial of %d is : %d\n",n,fact(n));
    return 0;


}