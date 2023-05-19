#include<stdio.h>
int main()
{
    int n,r,s=0;
    scanf("%d",&n);
    int a=n*n;
    while(a)
    {
        r=a%10;
        s=s+r;
        a=a/10;
    }
    if(s==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}