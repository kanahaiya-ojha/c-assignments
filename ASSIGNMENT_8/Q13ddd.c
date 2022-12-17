#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        char al='A';
        for(j=1;j<=13;j++)
        {
            if(j<=8-i||j>=6+i)
            {
                printf("%c",al);
                j<7?al++:al--;
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}