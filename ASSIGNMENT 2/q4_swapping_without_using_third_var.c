#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two int value for swapping:\n");
    printf("please enter as a=,b=\n ");
    scanf("a=%d,b=%d",&a,&b);
    printf("before swapping: a=%d and b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping:a=%d and b=%d\n",a,b);
    return 0;

        
}