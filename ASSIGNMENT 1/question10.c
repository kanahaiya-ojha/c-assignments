//Q. User Input date format – “DD/MM/YYYY” (27/11/2022)
// Output format –
// “Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022)
#include<stdio.h>
int main()
{
    int dd,mm,yy;
    printf("enter the date in the format-DD/MM/YYYY”");
    scanf("%d/%d/%d",&dd,&mm,&yy);

printf("Day-%d , month-%d ,year-%d",dd,mm,yy);
return 0;

}