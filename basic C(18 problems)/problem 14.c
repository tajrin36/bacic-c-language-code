//Write a C program to input base and height of a triangle and find area of the given triangle.
#include<stdio.h>
int main()
{
    float base,height,area;
    printf("base=");
    scanf("%f",&base);
    printf("height=");
    scanf("%f",&height);

    area= (base*height)/2;
    printf("area=%.2f",area);



    return 0;
}
