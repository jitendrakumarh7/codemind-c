#include<stdio.h>
int main()
{
    int a,b,c,m1,m2;
    scanf("%d%d%d",&a,&b,&c);
    m1=a>b?a:b;
    m2=m1>c?m1:c;
    printf("%d",m2);
}