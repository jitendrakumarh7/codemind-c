#include<stdio.h>
int main()
{
    float hra,pf,bs,da,gs;
    scanf("%f%f%f",&bs,&hra,&da);
    pf=bs*12/100;
    gs=bs+hra+da+pf;
    printf("%0.2f
%0.2f
",pf,gs);
}