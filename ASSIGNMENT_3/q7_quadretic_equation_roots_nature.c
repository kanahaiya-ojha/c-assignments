//Write a program to check whether roots of a given quadratic equation are real &
//distinct, real & equal or imaginary roots
// if descriminent>0->roots are real
        //descriminent==0--> equal
        //decriminent<0--> roots imaginary
       // D=b^2-4ac
#include<stdio.h>
int main()
{
    double a, b, c,descriminent;
    printf("Enter coefficients a,b and c:");
    scanf("%lf %lf %lf",&a,&b,&c) ;
    descriminent=(b*b)-(4*a*c);
    printf("descriminent is %lf\n",descriminent);
    if(descriminent>0)
    printf("roots are real\n");
    else if(descriminent<0)
    printf("roots are imaginary\n");
    else
    printf("roots are equal\n");
    return 0;
}