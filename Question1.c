#include<stdio.h>
int F1(int  x)
{
    if(x==0) return 1;
    else return F1(x-1)*x;
}
int F2(int  x )
{
    if(x==1) return 1;
    else return F2(x-1)+x;
}
int pow(int n,int m)
{
    if(m==1) return n;
    else return pow(n,m-1)*n;
}
main()
{
    int n,m;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("F1(n) = %d\n",F1(n));
    printf("F2(n) = %d\n",F2(n));
    printf("Enter m: ");
    scanf("%d",&m);
    printf("Result : %d",pow(n,m));
}
