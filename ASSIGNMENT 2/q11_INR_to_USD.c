#include<stdio.h>
int main()
{
    float inr;
    printf("Enter the amount in INR:");
    scanf("%f",&inr);
    printf("converted amount in USD:%.2f",inr/76.23);
    return 0;

}