// 8. Write a function to calculate the number of arrangements one can make from n items
// and r selected at a time. (TSRS)
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
    return fact(y)/fact(y-z);
}

int main()
{
    int n,r;
    printf("Enter n and r");
    scanf("%d %d",&n,&r);
    printf("Permutation = %d \n",comb(n,r));
    return 0;

}