/*ELECTRICITY BILL:
first 200 units= 80 paise
next 100 units= 90 paise
next 200 units= 80 paise
beyond 300 units= 1 rupee
*/

#define MIN_CHRG 100
#include<stdio.h>
#include<stdlib.h>

int main()
{
    unsigned int meter_number, units_consumed;
    float total_amount, total, surcharge, net_bill;
    system("clear");
    printf("Enter the consumer meter number: ");
    scanf("%u", &meter_number);
    
    printf("Enter the units consumed: ");
    scanf("%u", &units_consumed);
    
    printf("*Deatils of charges is as follows*\n");
    printf("\nMinimum meter charge: Rs. 100/-");
    
    if(units_consumed<=200)
    {
        total_amount= units_consumed* 0.80;
        printf("\n@80 paise for first 200 units: Rs.%.2f", total_amount);
    }
    
    else if(units_consumed<=300)
    {
        total_amount=(units_consumed-200)*0.90 + 160;
        printf("\n@80 paise for first 200 units:  Rs.160/-");
        printf("\n@90 paise for next 100 units: Rs. %.2f", (units_consumed-200)*0.90);
    }
    
    else
    {
        total_amount= (units_consumed-(200+100)*1.00 +160 + 90);
        printf("\n@80 paise for first 200 units:  Rs.160/-");
        printf("\n@90 paise for next 100 units: Rs. 90/-");
        printf("\n@Rs. 1.00 for above 300 units: Rs.%d", ((units_consumed-300)*1));
    }
    
    total_amount += MIN_CHRG;
    printf("\n>>>Total Amount Rs. %.2f", total_amount);
    
    if(total_amount>400)
    {
        surcharge= total_amount*0.15;
        printf("An additional surchage of 15%% on total amount in case of total amount is more than Rs. 400/-, i.e, Rs.%.2f", surcharge);
        net_bill= total_amount+ surcharge;
    }
    else
    {
        net_bill= total_amount;
    }
    
    printf("\n*Billed Amount: Rs. %.2f*\n", net_bill);
    return 0;
}
