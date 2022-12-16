#include<stdio.h>
int main()
{
    int n,a,s=0,r;
    scanf("%d",&n);
    a=n*n;
    while(a!=0)
    {
        r=a%10;
        s=s+r;
        a=a/10;
    }
    if(n==s)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}