//Write a C program to input marks of five subjects of a student and calculate total, average and percentage of all subjects.
#include<stdio.h>
int main()
{
    float total,avg,percentage;
    float a,b,c,d,e;
    printf("a,b,c,d,e=");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);

    total=a+b+c+d+e;
    printf("total=%f\n",total);

    avg= (total)/5;
    printf("avg=%.2f\n",avg);

    percentage=(total)/100;
    printf("percentage=%.2f\n",percentage);







    return 0;
}
