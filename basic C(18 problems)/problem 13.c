//Write a C Program to input two angles from user and find third angle of the triangle.
#include<stdio.h>
int main()
{
    float angle1,angle2,angle3;
    printf("angle1=");
    scanf("%f",&angle1);
    printf("angle2=");
    scanf("%f",&angle2);

    angle3= 180-(angle1+angle2);
    printf("third angle=%.2f",angle3);



    return 0;
}
