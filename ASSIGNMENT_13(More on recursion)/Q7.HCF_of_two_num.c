// 7. Write a recursive function to calculate HCF of two numbers
#include<stdio.h>
int hcf(int n1,int n2)
{
    if(n2==0)
    return n1;
    else
    return hcf(n2,n1%n2);

}
int main()
{
    int n1,n2;
    printf("Enter two num:");
    scanf("%d %d",&n1,&n2);
    printf("HCF of %d and %d is : %d",n1,n2,hcf(n1,n2));
    return 0;
}