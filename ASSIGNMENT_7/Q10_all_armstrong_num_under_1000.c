//10. Write a program to print all Armstrong numbers under 1000
#include<stdio.h>
    int main()
    {
        int n,sum,rem,x;

        for(n=1;n<=1000;n++)
        {
            x=n;
            for(sum=0;x!=0;x=x/10)
        {
            rem=x%10;
            sum=sum+rem*rem*rem;
        }
        if(sum==n)
        printf("%d\n",n);

        }

        return 0;

    }
