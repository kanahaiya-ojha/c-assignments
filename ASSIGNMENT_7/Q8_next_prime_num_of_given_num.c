//8. Write a program to find next Prime number of a given number
#include<stdio.h>
int main()
{
    int i,j,a;
    printf("Enter a num:");
    scanf("%d",&a);

    for(j=a+1;j>=a;j++)
    {
        for( i=2;i<=j;i++)
        {
        if(j%i==0)
        break;
       }
       if(i==j)
       {
       printf("next prime num is %d\n",j);
       break;

       }

    }
    return 0;
}
