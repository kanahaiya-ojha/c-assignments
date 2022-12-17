#include<stdio.h>
int main()
{
    for(int i=1;i<=4;i++)
    {
         int k=1;
        for(int j=1;j<=7;j++)
        { 
           if(j==3&& i==0)
          {
              k=k-2;
              printf("%d",k);
          }
            
           else if( j<=5-i || j>=3+i )
           {
           
            printf("%d",k);
            j<=3?k++:k--;
            }

            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
