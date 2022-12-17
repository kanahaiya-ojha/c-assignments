/*2. Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit*/
#include<stdio.h>
int main()
{
    
    int n,num1,num2;

    while(1)
{
printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\n");
    printf("Enter your choice: \n");
    scanf("%d",&n);

    switch(n)
    {
        case 1 :
                
                printf("Enter two num:");
                scanf("%d %d",&num1,&num2);
                printf("Addition is:%d\n",num1+num2);
                break;

        case  2 :
                printf("Enter two num:");
                scanf("%d %d",&num1,&num2);
                printf("Substraction is:%d\n",num1-num2);
                break;

        case 3 :
               printf("Enter two num:");
                scanf("%d %d",&num1,&num2);
                printf("Multiplication is:%d\n",num1*num2);
                break;
        case 4 :
                printf("Enter two num:");
                scanf("%d %d",&num1,&num2);
                printf("division  is:%d\n",num1/num2);
                break;

        case 5:
                return 0;
                break;
           
    }  
}
    
    return 0;                                                  

 }               