//9. Program to Convert even number into its upper nearest odd number Switch
//Statement.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter num:");
    scanf("%d",&n);
    switch(n%2==0)
    {
        case 0:
        printf("Given no is odd\n");
        printf(" num is %d\n",n);
        break;

        case 1:
        printf("Given no is even\n");
        printf("upper nearest odd num is %d\n",++n);
        break;

    }
    return 0;
}