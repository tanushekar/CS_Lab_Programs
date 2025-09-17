//roots of a quadratic equation by accepting non zero coefficients

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b, c, disc;
    float root1, root2;
    system("clear");
    
    NEXT:
    printf("Enter the non-zero coefficients: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if(a==0 || b==0 || c==0)
    {
        printf("!!Invalid input or coefficients..\n");
        goto NEXT;
    }
    disc= b*b-4*a*c;
    if(disc<0)
    {
        printf("Roots are imaginary..\n");
    }
    
    else if(disc>0)
    {
        root1= (-b+sqrt(disc)) / (2*a);
        root2= (-b-sqrt(disc)) / (2*a);
        printf("Roots are Real and Distinct\n");
        printf("Root-1 = %.2f\n", root1);
        printf("Root-2 = %.2f\n", root2);
    }
    else
    {
        root1= root2= -b / (2*a);
        printf("Roots are Real and Equal \n");
        printf("Root-1 = %.2f\n", root1);
        printf("Root-2 = %.2f\n", root2);
    }
    return 0;
}
