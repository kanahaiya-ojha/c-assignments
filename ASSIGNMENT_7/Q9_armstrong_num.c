//9. Write a program to check whether a given number is an Armstrong number or not
#include<stdio.h>
    int main()
    {
        int n,sum,rem,x;
        printf("Enter an int:");
        scanf("%d",&n);
        x=n;
        for(sum=0;n>0;n=n/10)
        {
            rem=n%10;
            sum=sum+rem*rem*rem;
        }
        if(sum==x)
        printf("no. is Armstrong");
        else
        printf("no. is not Armstrong");
        return 0;

    }
