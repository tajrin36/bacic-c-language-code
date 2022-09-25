//Write a C program to input radius of a circle from user and find diameter, circumference and area of the circle.
#include<stdio.h>
int main()
{

    float radius,diameter,circumference,area;
    printf("radius=");
    scanf("%f",&radius);

    diameter= (2*radius);
    printf("diameter=%.2f\n",diameter);

    circumference=(2*3.1416*radius);
    printf("circumference=%.2f\n",circumference);

    area=(3.1416*(radius*radius));
    printf("area=%.2f",area);


    return 0;
}
