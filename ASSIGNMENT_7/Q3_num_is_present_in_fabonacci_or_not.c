//3. Write a program to check whether a given number is there in the Fibonacci series or
//not.
#include<stdio.h>
int main()
{

  int fib=0,num,a=0,b=1,flag;
  printf("enter a num:");
  scanf("%d",&num);
 
 for(int i=2;i<=num;i++)
{

fib=a+b;
if(num==fib)
{
flag=6;
break;
}
a=b;
b=fib;
}
if(flag==6||num==a||num==b)
printf("%d is present in fabonacci series\n",num);
else
printf("%d is Not present in fabonacci series\n",num);

return 0;
  
}