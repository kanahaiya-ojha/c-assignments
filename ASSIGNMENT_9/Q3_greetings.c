//3. Write a program which takes the day number of a week and displays a unique
//greeting message for the day
#include<stdio.h>
int main()
{
    int n;

    printf("Enter day number: ");
    scanf("%d",&n);

    switch(n)
    {
        case 1 :
                printf("good morning");
                break;

        case 2 :
                printf("good afternoon");
                break;

        case 3 :
                printf("good evening\n");
                break;
        case 4 :
                printf("good night\n");
                break;

        case 5 :
                printf("Nice day\n");
                break;

        case 6 :
                printf("lets enjoy your day\n");
                break;

        case 7 :
                printf("today is your goldan apportunity to do something\n");
                break;
    }
    return 0;
}            