//Write a C program to input length and width of a rectangle and find area of the given rectangle.
#include<stdio.h>
int main()
{
    float length,width,Area;
    printf("length=");
    scanf("%f",&length);
    printf("width=");
    scanf("%f",&width);

    Area= (length*width);
    printf("Area of rectangle=%.3f\n",Area);



    return 0;
}

