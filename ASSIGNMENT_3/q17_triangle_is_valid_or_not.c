// 17. Write a program which takes the length of the sides of a triangle as an input. Display
// whether the triangle is valid or not
#include<stdio.h>
int main()
{
float a,b,c;
printf("Enter the lenth of sides of triangle a,b and c :");
scanf("%f %f %f",&a,&b,&c);
if((a+b>c)||(a+c>b)||(b+c>a))
printf("Triangle is valid");
else
printf("Triangle is Not valid");
return 0;
}