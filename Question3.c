#include<stdio.h>
void mid(int k,int t)
{
    for(int i=t;i<=t+2;i++)
    {
        printf("%c  ",186);
       if(i*k<10) printf("%d x %d = %d  ",i,k,i*k);
       else printf("%d x %d = %d ",i,k,i*k);
    }
    printf("%c",186);
    printf("\n");
}
void hang1()
{
    printf("%c",201);
    for(int i=0;i<13;i++) printf("%c",205);
    printf("%c",203);
    for(int i=0;i<13;i++) printf("%c",205);
    printf("%c",203);
    for(int i=0;i<13;i++) printf("%c",205);
    printf("%c",187);
    printf("\n");
}
void hangngang()
{
    printf("%c",204);
    for(int i=0;i<13;i++) printf("%c",205);
    printf("%c",206);
    for(int i=0;i<13;i++) printf("%c",205);
    printf("%c",206);
    for(int i=0;i<13;i++) printf("%c",205);
    printf("%c",185);
    printf("\n");
}
void hangcuoi()
{
    printf("%c",200);
    for(int i=0;i<13;i++) printf("%c",205);
    printf("%c",202);
    for(int i=0;i<13;i++) printf("%c",205);
    printf("%c",202);
    for(int i=0;i<13;i++) printf("%c",205);
    printf("%c",188);
    printf("\n");
}
main()
{
    printf("--------------BANG CUU CHUONG--------------\n");
    hang1();
    for(int i=1;i<=9;i++)     mid(i,1);
    hangngang();
    for(int i=1;i<=9;i++)     mid(i,4);
    hangngang();
    for(int i=1;i<=9;i++)     mid(i,7);
    hangcuoi();
}
