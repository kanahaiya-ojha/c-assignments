//10. C program to find all roots of a quadratic equation using switch case
#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,D;
float x,y;
printf("Enter coefficient of x^2 ,x and constant term:");
scanf("%d %d %d",&a,&b,&c);
D=b*b-4*a*c;
if(D>0)
{
printf("Both roots are real and distinct\n");
x=(-b+sqrt(D))/(2*a);
y=(-b-sqrt(D))/(2*a);
printf("Roots are: \n %f , %f",x,y);
}
if(D==0)
{
printf("Both roots are equal\n");
x=-b/(2.0*a);
printf("root is %f",x);
}

if(D<0)
printf("Both roots are imaginary\n");


return 0;
}