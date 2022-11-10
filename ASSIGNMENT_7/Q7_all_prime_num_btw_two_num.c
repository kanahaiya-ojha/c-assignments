//7. Write a program to print all Prime numbers between two given numbers
#include<stdio.h>
int main()
{
    int i,j,a,b;
    printf("Enter two num:");
    scanf("%d %d",&a,&b);

    for(j=a;j<=b;j++)
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
