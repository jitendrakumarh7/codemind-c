#include<stdio.h>
int main()
{
    int a,b,s,p;
    float c,d,s1,p1;
    scanf("%d%d",&a,&b);
    scanf("%f%f",&c,&d);
    s=a+b;
    p=a-b;
    s1=c+d;
    p1=c-d;
    printf("%d %d
",s,p);
    printf("%0.1f %0.1f",s1,p1);
}