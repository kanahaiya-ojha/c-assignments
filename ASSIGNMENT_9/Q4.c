
/*4. Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an isosceles
triangle or not
b. Check whether a given set of three numbers are lengths of sides of a right
angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle or not
d. Exit*/
#include<stdio.h>
int main()
{
int l1,l2,l3;
char choice;
printf("Enter l1,l2 and l3: ");
scanf("%d %d %d",&l1,&l2,&l3);
while(1)
{

printf("A.check for isoceles triangle \n");
printf("B.check for rightangle triangle \n");
printf("C.check for equilateral triangle \n");
printf("D.Exit\n");
printf("please Enter your choice:");
fflush(stdin);
scanf("%c",&choice);
switch(choice)
{
case 'A':
if(l1==l2||l2==l3||l3==l1)
printf("Yes!\nlengths of an isosceles triangle ");
else
printf("No!\nlengths are not of an isosceles triangle ");
break;
case 'B':
if(l1*l1+l2*l2==l3*l3||l2*l2+l3*l3==l1*l1||l3*l3+l1*l1==l2*l2)
printf("Yes!\nlengths of an rightangle triangle ");
else
printf("No!\nlengths are not of an rightangle triangle ");
break;
case 'C':
if(l1==l2&& l2==l3)
printf("Yes!\nlengths of an equilateral triangle ");
else
printf("No!\nlengths are not of an equilateral triangle ");
break;
case 'D':
return 0;
break;



   }


  }
  return 0;

}