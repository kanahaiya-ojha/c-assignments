//5. Write a program to check whether two given numbers are co-prime numbers or not
#include<stdio.h>
int main()
{
int x,y,i,hcf;
printf("Enter 2 num");
scanf("%d %d",&x,&y);
for(i=1;i<=x*y;i++)
{
    if((i%x==0) && (i%y==0))
    {
        break;
    }
}
//FOR HCf
hcf=x*y/i;
if(hcf==1)
printf("num are co-prime");
else
printf("num are Not co-prime");
return 0;
}