//Write a C program to input temperature in degree Fahrenheit and convert it to degree Centigrade.
#include<stdio.h>
int main()
{
    float temp,celsius ;
    printf("temperature in fahrenheit=");
    scanf("%f",&temp);

    //temperature in f to c
    celsius=(((5*temp)-160)/9);
    printf("celsius=%.2f",celsius);



    return 0;
}

