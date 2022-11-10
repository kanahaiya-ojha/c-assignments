//7. Write a program to print the first 10 even natural numbers in reverse order
#include<stdio.h>
int main()
{
    for(int i=10;i>0;i--)
    {
        if(i%2==0)
        printf("%d\n",i);
    }
    return 0;
}