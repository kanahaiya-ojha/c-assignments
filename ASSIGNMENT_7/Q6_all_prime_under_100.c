//6. Write a program to print all Prime numbers under 100
#include<stdio.h>
int main()
{
    int i,j;

    for(j=0;j<=100;j++)
    {
        for( i=2;i<=j;i++)
        {
        if(j%i==0)
        break;
       }
       if(i==j)
       printf("%d\n",j);

    }

    return 0;
}
