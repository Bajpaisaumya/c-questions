#include<stdio.h>
int main()
{
    int month;
    printf("enter the month number(1-12):");
    scanf("%d",&month);
    switch(month)
    {
        case 1:
        printf("31 days");
        break;
        case 2:
        printf("29/28 days");
        break;
        case 3:
        printf("31 days");
        break;
        case 4:
        printf("30 days");
        break;
        case 5:
        printf("31 days");
        break;
        case 6:
        printf("30 days");
        break;
        case 7:
        printf("31 days");
        break;
        case 8:
        printf("31 days");
        break;
        case 9:
        printf("30 days");
        break;
        case 10:
        printf("31days");
        break;
        case 11:
        printf("30 days");
        break;
        case 12:
        printf("31 days");
        break;
        default:
        printf("invalid input ");
        return 0;    }
}
