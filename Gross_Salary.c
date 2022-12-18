#include<stdio.h>
int main()
{
    float bs,da,hra,gs;
    scanf("%f%f%f",&bs,&hra,&da);
    if(bs>20000)
    {
        hra=0.3;
        da=0.95;
    }
   else if(bs<=20000&&bs>10000)
    {
        hra=0.25;;
        da=0.9;
    }
   else if(bs<=10000)
    {
        hra=0.2;
        da=0.8;
    }
    gs=bs+bs*hra+bs*da;
    printf("%0.2f",gs);
}