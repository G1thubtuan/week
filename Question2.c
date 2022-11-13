#include<stdio.h>
int fun(int  x)
{
    int k=1;
    if(x==1 || x==0) k=0;
    if(x==2 ) k=1;
    else
        for(int i=2;i<x;i++)
    {
        if(x%i==0)
        {
             k=0;
        break;
        }
    }
    return k;
}
int foo(int  x)
{
    int res=0,dem=1;
    while(res<=x)
    {
        res+=dem;
        dem++;
    }
    return dem-2;
}
main()
{
   printf("fun(1) = %d\n", fun(1));
   printf("fun(2) = %d\n", fun(2));
   printf("fun(5) = %d\n", fun(5));
   printf("fun(6) = %d\n", fun(6));
   printf("\n");
   printf("foo(9) = %d\n", foo(9));
   printf("foo(10) = %d\n", foo(10));
   printf("foo(11) = %d\n", foo(11));
   getch();
}
