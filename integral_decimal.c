//to read floating point number, separate and display the integral and decimal part of the given number

#include<stdio.h>
#include<stdlib.h>

int main()
{
    float real_number, decimal_part;
    int whole_number;
    system("clear");
    printf("Enter the real number: ");
    scanf("%f", &real_number);
    
    whole_number=real_number;
    decimal_part=real_number-whole_number;
    
    printf("Integral part is %d and decimal part is %.2f", whole_number, decimal_part);
    return 0;
}
