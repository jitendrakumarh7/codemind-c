#include<stdio.h>
int main()
{
    int b1,b2,h;
    float area;
    scanf("%d%d%d",&b1,&b2,&h);
    area=(b1+b2)*h*0.5;
    printf("%0.4f",area);
}