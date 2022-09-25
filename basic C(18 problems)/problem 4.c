//Write a C program to input length and width of a rectangle and calculate perimeter of the rectangle. How to find perimeter of a rectangle in C programming
#include<stdio.h>
int main()
{
    float length,width,Perimeter;
    printf("length=");
    scanf("%f",&length);
    printf("width=");
    scanf("%f",&width);

    Perimeter= 2*(length+width);
    printf("Perimeter of rectangle=%.3f\n",Perimeter);



    return 0;
}
