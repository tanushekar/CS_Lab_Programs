//reverse a 4 digit number and check if palindrome

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, temp, rev_digits, digit;
    system("clear");
    printf("\nEnter the number of terms: ");
    scanf("%4d", &n);
    
    temp =n;
    rev_digits =0;
    
    while(n)
    {
        digit= n%10;
        rev_digits= rev_digits*10 +digit;
        n/=10;
    }
    
    if(rev_digits== temp)
        printf("Reversed form of %d is %d- is a PALINDROME\n", temp, rev_digits);
        
    else
        printf("Reversed form of %d is %d- NOT a PALINDROME\n", temp, rev_digits);
    return 0;
}
