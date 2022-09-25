//Write a C program to input side of an equilateral triangle from user and find area of the given triangle.
#include<stdio.h>
int main()
{
    float a,area;
    printf("side of an equilateral triangle,a=");
    scanf("%f",&a);

    area= (sqrt(3)/4)*a*a;
    printf("area=%.2f",area);



    return 0;
}
