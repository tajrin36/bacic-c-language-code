//Write a C program to input temperature in Centigrade and convert to Fahrenheit.
#include<stdio.h>
int main()
{
    float temp,fahrenheit ;
    printf("temperature in celsius=");
    scanf("%f",&temp);

    //temperature in c to f
    fahrenheit=(((9*temp)+160)/5);
    printf("fahrenheit=%.2f",fahrenheit);



    return 0;
}
