#include<stdio.h>
int pal(int n)
{
    int r,s=0,p;
    p=n;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(p==s)
    return 1;
    else
    return 0;
}
int rev(int n)
{
    int r,s=0;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    return s;
}
int main()
{
    int n,a;
    scanf("%d",&n);
    while(n)
    {
    a=n+rev(n);
    if(pal(a))
    {
        printf("%d",a);
        break;
    }
    else
    {
        n=a;
    }
    }
}