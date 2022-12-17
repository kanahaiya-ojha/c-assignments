
//1. Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
float calArea(float rad);
int main()
{
float rad;
printf("Enter radius:");
scanf("%f",&rad);
printf("area of circle is: %f",calArea(rad));

}
float calArea(float r)
{
 
 return 3.14*r*r;//return something which is float value
    
}