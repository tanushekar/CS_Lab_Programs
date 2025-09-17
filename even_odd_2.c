//using '&' operator to determine whether a given number is ODD OR EVEN

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int number;
    system("clear");
    printf("Enter a number: ");
    scanf("%d", &number);
    
    (number&1) ? printf("Number is ODD\n") : printf("Number is EVEN\n");
    
    //(number&1==0)
    return 0;
}
