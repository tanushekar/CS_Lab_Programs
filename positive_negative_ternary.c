//postive or negative using ternary operator

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int number;
    system("clear");
    printf("Enter a number: ");
    scanf("%d", &number);
    
    (number>0) ? printf("Number is positive\n") : printf("Number is negative or ZERO\n");
    return 0;
}
