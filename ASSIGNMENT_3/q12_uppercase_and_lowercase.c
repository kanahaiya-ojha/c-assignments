// 12. Write a program to check whether a given alphabet is in uppercase or lowercase
#include<stdio.h>
int main()
{
    char ch;
    printf("Entar a alphabat:");
    scanf("%c",&ch);
    if(ch>='a'&& ch<='z')
    printf("lower case");
    else if(ch>='A'&&ch<='Z')
    printf("upper case");
    return 0;
}