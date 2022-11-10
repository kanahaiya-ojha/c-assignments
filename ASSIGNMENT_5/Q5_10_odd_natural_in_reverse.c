//5. Write a program to print the first n odd natural numbers in reverse order
#include<stdio.h>
int main()
{ 
    int n;
    printf("Enter n=");
    scanf("%d",&n);

    for(int i=n;i>0;i--)
    {
        if(i%2!=0)
        printf("%d\n",i);
    }
    return 0;
}