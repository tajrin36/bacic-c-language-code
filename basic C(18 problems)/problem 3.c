//Write a C program to input two numbers and perform all arithmetic operations.
#include<stdio.h>
int main()
{
    int a,b,sum,Difference,Product,Modulus;
    float Quotient;
    printf("a,b=");
    scanf("%d%d",&a,&b);

    sum=a+b;
    Difference=a-b;
    Product=a*b;
    Quotient=(float )a/b;
    Modulus=a%b;

    printf("sum=%d\n",sum);
    printf("Difference=%d\n",Difference);
    printf("Product=%d\n",Product);
    printf("Quotient=%.2f\n",Quotient);
    printf("Modulus=%d\n",Modulus);



    return 0;
}
