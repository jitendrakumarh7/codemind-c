#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int s=2*a*b*c*512;
    printf("%dKB",s/1024);
    
}