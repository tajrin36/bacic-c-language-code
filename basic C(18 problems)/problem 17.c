//Write a C program to input principle, time and rate (P, T, R) from user and find Simple Interest.
#include<stdio.h>
int main()
{
    float p,t,r,interest;
    printf("enter p,t,r=");
    scanf("%f%f%f",&p,&t,&r);

    interest = (p*t*(r/100));
    printf(" simple interest=%.2f",interest);



    return 0;
}
