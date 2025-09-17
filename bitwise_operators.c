//program to perform bitwise operations

#include<stdio.h>
#include<stdlib.h>

int main()
{
    unsigned short int a, b, c, d, e, f, g, h, n;
    system("clear");
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    c= a&b;
    printf("%d Bitwise- AND %d is %d\n", a, b, c);
    
    d= a|b;
    printf("%d Bitwise- OR %d is %d\n", a, b, d);
    
    e= ~a;
    printf("%d Bitwise- NOT %d is %d\n", a, b, e);
    
    printf("Enter the number of bits to be shifted: ");
    scanf("%d", &n);
    
    f= a>>n;
    printf("Bitwise right shift of %d by %d bits is %d\n", a, n, f);
    
    g= a<<n;
    printf("Bitwise left shift of %d by %d bits is %d\n", a, n, g);
    
    h= a^b;
    printf("%d Bitwise EX-OR/ XOR %d is %d\n", a, b, h);
        return 0;
}
