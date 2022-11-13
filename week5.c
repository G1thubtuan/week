#include<stdio.h>
void tgv()
{
     int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)   printf("* ");
        printf("\n");
    }
}
void tgc()
{
    int height;
    scanf("%d",&height);
    for(int i=1;i<=height;i++)
    {
        for(int j=1;j<=height-i;j++)  printf("  ");
        for(int j=1;j<=2*i-1    ;j++)  printf("* ");
        for(int j=1;j<=height-i;j++)  printf("  ");
        printf("\n");
    }
}
void tgalpha()
{
    int height;
    scanf("%d",&height);
    for(int i=1;i<=height;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf("%c ",'A'+j);
        }
        for(int j=1;j<i;j++) printf("%c ",'A'+i-j-1);
        printf("\n");
    }
}
int main()
{
//  tgv();
//  printf("%c%c%c%c%c",33,32,34,32,35);
//  tgc();
//  tgalpha();

//        int  x;
//        char letter[20];
//        scanf("%s %d",&letter,&x);
//        printf("%.8s\n %d",letter,x);

        printf("            MENU\n");
        printf("Code        Name         Price\n");
        printf("  1         Aaa          45000.00\n");
        printf("  2         Bbb          12500.00");
}
