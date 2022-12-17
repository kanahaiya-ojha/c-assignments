//2. Write a function to calculate simple interest. (TSRS)
float calSi(float x,float y,float z);//function declaration
#include<stdio.h>
int main()
{
float p,t,r;
printf("enter principle amount ,Rate and Time :");
scanf("%f %f %f",&p,&r,&t);
printf("simple intrest is %f ",calSi(p,r,t));
return 0;
}
float calSi(float x,float y,float z)
{
    return (x*y*z)/100;
}
