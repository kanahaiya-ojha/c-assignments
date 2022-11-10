//4. Write a program to calculate HCF of two numbers
#include<stdio.h>
int main()
{
int x,y,i;
printf("Enter 2 num");
scanf("%d %d",&x,&y);
for(i=1;i<=x*y;i++)
{
    if((i%x==0) && (i%y==0))
    {
        break;
    }
}
//FOR HCF
printf("HCF of %d and %d is %d ",x,y,x*y/i);
return 0;
}