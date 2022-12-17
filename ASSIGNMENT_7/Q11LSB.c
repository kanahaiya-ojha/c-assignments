#include<stdio.h>
int main()
{
    int count=0,n;
    printf("Enter a num:");
    scanf("%d",&n);
    while(n!=0)
    {
        count++;
        if(n&1==1)
          break;
        else
        n=n>>1;
    }
    printf("first 1 from LSB is at %d",count);
    return 0;

}