#include<stdio.h>
int main()
{
    int n,i,s=0;
    printf("enter the numbers");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        s=s+i;
        printf("sum=%d",s);

    }
return 0;
}
