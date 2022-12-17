//3. Write a function to check whether a given number is even or odd. Return 1 if the
//number is even, otherwise return 0. (TSRS)
#include<stdio.h>
int evenOdd(int n);

int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if(evenOdd(n)==1)
    printf("Even\n");
    else
    printf("Odd\n");
}

int evenOdd(int x)
{
    return (x%2==0);//this condition will return either 1(true)or 0(false)
}
