//4. Write a function to print first N natural numbers (TSRN)
#include<stdio.h>
void naturalNo(int x);
int main()
{
int n;
printf("enter a num");
scanf("%d",&n);
naturalNo(n);
return 0;
}
void naturalNo(int x)
{
    for(int i=1;i<=x;i++)
    {
        printf("%d \n",i);
    }
}