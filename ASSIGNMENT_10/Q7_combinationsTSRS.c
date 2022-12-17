// 7. Write a function to calculate the number of combinations one can make from n items
// and r selected at a time. (TSRS)
//comb=n!/r!*(n-r)!
#include<stdio.h>
int fact(int x)
{
    int f=1;
    for(int i=1;i<=x;i++)
    {
     f=f*i;
    }
    return f;
}

int comb(int y ,int z)
{
    return fact(y)/(fact(z)*fact(y-z));
}

int main()
{
    int n,r;
    printf("Enter n and r");
    scanf("%d %d",&n,&r);
    printf("combination = %d \n",comb(n,r));
    return 0;

}