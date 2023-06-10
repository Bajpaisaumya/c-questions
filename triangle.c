#include<stdio.h>
int main()
{
    int A,B,C;
    printf("enter the two angle of a triangle");
    scanf("%d%d",&A,&B);
    C=180-(A+B);
    printf("third angle of triangle=%d",C);
    return 0;}
