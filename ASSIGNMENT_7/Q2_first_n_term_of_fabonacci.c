//2. Write a program to print first N terms of Fibonacci series
#include<stdio.h>
int main()
{

  int fib=0,num,a=0,b=1,flag;
  printf("enter a num:");
  scanf("%d",&num);
  printf("%d\n",a);
  printf("%d\n",b);
 
 for(int i=2;i<=num;i++)
{

fib=a+b;
printf("%d\n",fib);
a=b;
b=fib;
}

return 0;
  
}