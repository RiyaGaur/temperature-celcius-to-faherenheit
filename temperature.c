#include<stdio.h>
void main()
{
    float C,F;
    printf("enter temperature in celsius:\n");
    scanf("%f",&C);
    F=((9*C)/5)+32;
    printf("temperature in faherenheit is:\n%f",F);
}
