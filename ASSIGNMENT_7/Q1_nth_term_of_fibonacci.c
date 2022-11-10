//1. Write a program to find the Nth term of the Fibonnaci series.

#include<stdio.h>
int main()
{

  int fib=0,num,a=0,b=1;
  printf("enter a num:");
  scanf("%d",&num);

 for(int i=2;i<=num;i++)
{

fib=a+b;
a=b;
b=fib;

}
printf("the %d th fibonacci number is %d",num,fib);
return 0;
  
}