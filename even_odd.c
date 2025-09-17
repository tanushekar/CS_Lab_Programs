// to determine whether a given number is ODD or EVEN and print the message

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int number;
    system("clear");
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("*using if...else statement\n");
    
    if ((number%2) == 0)
        printf("Number is EVEN\n");
    else
        printf("Number is ODD\n");
        
    printf("*without using if...else statement\n");
    
    if ((number%2) == 0)
        printf("Number is EVEN\n");
    if ((number%2) != 0)
        printf("Number is ODD\n");
        return 0;
}
