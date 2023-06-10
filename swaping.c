 #include<stdio.h>
    int main()
    {
        int a,b,c;
        printf("enter two numbers");
        scanf("%d%d",&a,&b);
        printf("values before swepping\n");
        printf("the value of a is %d\n",a);
        printf("the valuenofn b %d\n",b);
        c=a;
        a=b;
        b=c;
   printf("value after swwpping\n");
   printf("the value of a is=%d\n",a);
   printf("the value of b is =%d\n",b );
   getch();
    }
