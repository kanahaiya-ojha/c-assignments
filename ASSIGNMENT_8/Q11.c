#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        char al='A';
        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i)
            {
                printf("%c",al);
                j<5?al++:al--;
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}