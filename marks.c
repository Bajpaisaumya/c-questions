#include<stdio.h>
int main()
{
    int p,c,b,m,h, avg,total ;
    float perc;
printf("enter the marks of five subjects");
scanf("%d%d%d%d%d",&p,&c,&b,&m,&h);
total=(p+c+b+m+h);
printf("total marks=%d",total);
avg=(p+c+b+m+h)/5;
printf("avg marks=%d",avg);
perc=(total/500.0)*100;
printf("percentage of the marks=%.2f",perc);
return 0;}
