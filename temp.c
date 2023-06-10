#include<stdio.h>
int main()
{
    
    float celcius, fahrenheit;
    printf("enter the temperature in fahrenheit");
    scanf("%f",&fahrenheit);
    celcius=(fahrenheit-32)*5/9;
    printf("%.2f fahrenheit=%.2f celcius",fahrenheit,celcius);
    return 0;}
