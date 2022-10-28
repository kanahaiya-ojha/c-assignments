#include<stdio.h>
int main()
{
    int num,digit;
    printf("Enter a  num:");
    scanf("%d",&num);
    printf("Enter a digit:");
    scanf("%d",&digit);
    num=num*10+digit;
    printf("Resulting no. is %d",num);
    return 0;
   
    
    
}
