//largest of 3 numbers using ternary operator

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n1, n2, n3, big;
    system("clear");
    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    
    big=(n1>n2) ? (n1>n3 ? n1 : n3) : (n2>n3 ? n2 :n3);
    
    printf("Biggest among %d, %d and %d is %d\n", n1, n2, n3, big);
    return 0;
}
