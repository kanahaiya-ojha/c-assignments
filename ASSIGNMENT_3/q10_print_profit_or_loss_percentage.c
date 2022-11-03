// 10. Write a program which takes the cost price and selling price of a product from the
// user. Now calculate and print profit or loss percentage
#include<stdio.h>
int main()
{
    double cp,sp;
    printf("Enter cost prize and selling prize:");
    scanf("%lf %lf",&cp,&sp);
    if(cp>sp)
    printf("Loss percentage is=%lf",(cp-sp)/cp*100);
    else
   printf("profit percentage is=%lf",((sp-cp)/cp)*100);
   return 0;
    
}