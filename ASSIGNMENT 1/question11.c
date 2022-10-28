//Q. User Input date format – “HH:MM”
// Output format – “HH hour and MM Minute”
#include<stdio.h>
int main()
{
    int hh,mm;
    printf("enter time HH:MM\n");
    scanf("%d:%d",&hh,&mm);
    printf("%d Hour and %d Minutes",hh,mm);
    return 0; 
}