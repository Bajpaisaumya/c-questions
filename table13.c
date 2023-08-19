#include<stdio.h>
    int main()
    {
        int i,t;
        printf("input the number whose table u want");
        scanf("%d",&t);
        for(i=1;i<=10;i++)
        { int x=0;
           x=t*i;
           printf("%d*%d=%d\n",t,i,x);
           
        }
        return 0;
    }
