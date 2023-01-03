#include<stdio.h>
int fib(int n)
{
    int a=0,b=1,c,i,ct=0;
    for(i=1;i<=n;i++)
    {
        c=a+b;
        if(c==n)
        {
            ct++;
        }
        a=b;
        b=c;
    }
    if(ct==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int n,i,d=0,d1=0,s,s1;
    scanf("%d",&n);
    for(i=n+1;;i++)
    {
        if(fib(i))
        {
            d=i-n;
            s=i;
            break;
        }
    }
    for(i=n-1;;i--)
    {
        if(fib(i))
        {
            d1=n-i;
            s1=i;
            break;
        }
    }
    if(d<d1)
    {
        printf("%d",s);
    }
    else if(d>d1)
    {
        printf("%d",s1);
    }
    else if(d==d1)
    {
        printf("%d %d",s1,s);
    }
}