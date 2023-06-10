#include<stdio.h>
int main()
{
    int r,d;
    float pi=3.14,S,A;
    printf("enter the radius of the circle");
    scanf("%d",&r);
    d=2*r;
    printf("\n diameter of circle %d",d);
    S=2*pi*r;
    printf("\n circumfrence of circle: %f",S);
    A=pi*r*r;
    printf("\n area of circle: %f",A);
    return 0;}
