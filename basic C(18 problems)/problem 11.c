//Write a C program to input two numbers from user and find their power using pow() function.
#include<stdio.h>
int main()
{
    float base,exponent,power;
    printf("enter base=");
    scanf("%f",&base);
    printf("enter exponent=");
    scanf("%f",&exponent);

    power= pow (base,exponent);

    printf("%f^%f=%.2f",base,exponent,power);




    return 0;
}
