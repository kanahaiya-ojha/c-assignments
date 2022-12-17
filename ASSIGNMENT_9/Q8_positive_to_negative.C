//8. Program to convert a positive number into a negative number and negative number
//into a positive number using a switch statement.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter no.");
    scanf("%d",&n);
    switch(n==0)
    {
        case 0:
         switch(n<0)
    {
        case 0:
        printf("Negative no. of %d is %d\n",n,-n);
        break;
        case 1:
        printf("Positive no of %d is :%d\n",n,-n);
        break;
        
    }
 break;  
        case 1:
        printf("Entered no. is zero\n");
        break;

    }
    return 0;

}
