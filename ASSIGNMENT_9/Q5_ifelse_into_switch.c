/*5. Convert the following if-else-if construct into switch case:
if(var == 1)
printf("good");
else if(var == 2)
printf("better");
else if(var == 3)
printf("best");
else
printf("invalid");*/
#include<stdio.h>
int main()
{
    int var;
    printf("Enter var:");
    scanf("%d",&var);

    switch(var==1)
    {
        case 0:
        switch(var==2)
        {
            case 0:
            switch(var==3)
            {
                case 0:
                printf("invalid");
                break;
                case 1:
                printf("best");
                break;

            }
            break;
            case 1:
            printf("better");
            break;
        }
        break;
        case 1:
        printf("good\n");
        break;
    }
    return 0;
}