//Write a program to count digits in a given number
#include<stdio.h>
    int main()
    {
        int n,count=0;
        printf("Enter the num=");
        scanf("%d",&n);
        while(n!=0)
        {
            n=n/10;
            count++;
        }
        printf("no. of digits is : %d",count);
        return 0;
    }