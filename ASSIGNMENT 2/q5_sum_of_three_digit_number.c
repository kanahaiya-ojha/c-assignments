#include<stdio.h>
int main()
{
    int a,b,c;//a=123

   
    printf("Enter any 3 digit no:");
    scanf("%d",&a);
    c=a%10;//c=3
    a=a/10;//a=12
    b=a/10;//b=1

    a=a%10;//a=2
    a=a+b+c;    
     printf("sum of three digits = %d",a);
    return 0;
}