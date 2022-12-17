/*7. Program to take the value from the user as input electricity unit charges and calculate
total electricity bill according to the given condition . Using the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.*/
#include<stdio.h>
int main()
{
    float unitCharges,tbill,ebil,remunit,surcharge;
    printf("Enter Elecricity Unit charges:");
    scanf("%f",&unitCharges);
    switch(unitCharges<=50)
    {
        case 0:
        switch(unitCharges<=150)
        {
            case 0:
            switch(unitCharges<=250)
            {
                case 0:
                remunit=unitCharges-250;
                ebil=50*0.50+100*0.75+100*1.20+remunit*1.50;              
                break;

                case 1:
                remunit=unitCharges-150;
                ebil=50*0.50+100*0.75+remunit*1.20;            
                break;
                
            }
            break;
            case 1:
             remunit=unitCharges-50;

             ebil=(50*0.50)+(remunit*0.75);            
             break;
        }
        break;
       
        case 1:
        ebil=unitCharges*0.50;
        
        break;
    }
     surcharge=ebil/100*20;
     tbill=ebil+surcharge;
     printf("your total elrectricity bill is:%f\n",tbill);
    return 0;

}