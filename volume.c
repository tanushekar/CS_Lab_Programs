//program to find the volume of  a sphere

#include<stdio.h>
#include<stdlib.h>
void main()
{
    float radius, volume;
    system("clear");
    printf("Enter the radius of sphere: ");
    scanf("%f", &radius);
    volume = (4.0/3.0) * (22.0/7.0) * (radius * radius * radius);
    printf("Volume of sphere is %f", volume);
}
