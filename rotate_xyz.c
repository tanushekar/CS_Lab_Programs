//program to rotate the values of x, y and z

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x, y, z, temp;
    system("clear");
    printf("Enter the values of x, y, and z: ");
    scanf("%d %d %d", &x, &y, &z);
    
    printf("Values of x, y, z before rotation: \n");
    printf("Value of x is %d\n", x);
    printf("Value of y is %d\n", y);
    printf("Value of z is %d\n", z);
    
    temp=x;
    x=y;
    y=z;
    z=temp;
    
    printf("Values of x, y, z after rotation: \n");
    printf("Value of x is %d\n", x);
    printf("Value of y is %d\n", y);
    printf("Value of z is %d\n", z);
    
    return 0;
}
