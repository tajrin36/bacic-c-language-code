//Write a C program to input length in centimeter and convert it to meter and kilometer.
#include<stdio.h>
int main()
{
    float length,meter,kilometer;
    printf("length=");
    scanf("%f",&length);

    meter= length/100;
    printf("in meter=%.2f\n",meter);\

    kilometer= length/100000;
    printf("in kilometer=%.2f\n",kilometer);


    return 0;
}
