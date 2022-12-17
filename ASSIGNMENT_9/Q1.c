//1. Write a program which takes the month number as an input and display number of
//days in that month
#include<stdio.h>
int main()
{
    int month;

    printf("Enter a month number \n");
    scanf("%d",&month);

    switch(month)
    {
        case 1 :
                printf("january-:31");
                break;

        case 2 :
                printf("february:-28");
                break;

        case 3 :
                printf("march:-31\n");
                break;
        case 4 :
                printf("april:-30\n");
                break;

        case 5 :
                printf("may:-31\n");
                break;

        case 6 :
                printf("june:-30\n");
                break;

        case 7 :
                printf("july:-31\n");
                break;
        case 8 :
                printf("August:-31\n");
                break;
        case 9 :
                printf("september:-30\n");
                break;
        case 10:
                printf("October:-31\n");
                break;
        case 11 :
                printf("November:-30\n");
                break;
         case 12 :
                printf("December:-31\n");
                break;
             
        default :
                printf("Invalid Input\n");
    }

    return 0;
}
