// 18. Write a program which takes the month number as an input and display number of
// days in that month.
#include<stdio.h>
int main()
{
    int month;
    printf("Enter month:");
    scanf("%d",&month);
    if((month==1)||(month==3)||(month==5)||(month==7)||(month==8)||(month==10)||(month==12))
    printf("Days are=31");
    else if((month==4)||(month==6)||(month==9)||(month==11))
    printf("Days are=30");
    else
    printf("Days are=28");
    return 0;
    
    
}
