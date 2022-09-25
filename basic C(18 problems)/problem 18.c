//Write a C program to input principle (amount), time and rate (P, T, R) and find Compound Interest.
#include<stdio.h>
int main()
{
    float p,t,r,interest;
    printf("enter p,t,r=");
    scanf("%f%f%f",&p,&t,&r);

    interest= p*(pow((1+(r/100)),t));
     printf("compound interest=%.2f",interest);


    return 0;
}

