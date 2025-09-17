//generate a fibonacci sequence where first and second terms are 0 and 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int f1, f2, f, i, n;
    system("clear");
    printf("\nEnter the number of terms: ");
    scanf("%d", &n);
    
    if(n<0)
    n= -n;
    
    f= f1= 0;
    f2= 1;
    
    printf("%d Fibonacci numbers are\t", n);
    for(i=1; i<=n; i++)
    {
        printf("%d\t", f);
        f1 = f2;
        f2 = f;
        f= f1+f2;
    }
    printf("\n");
    return 0;
}
