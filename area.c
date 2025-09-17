//program to find the area of a triangle
#include<stdio.h>
#include<stdlib.h>

#include<math.h>

void main()
{
    float a, b, c, s, area;
    system("clear");
    printf("Enter the three sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    s=(a+b+c)/2;
    area= sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle is %f", area);
}
