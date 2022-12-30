#include<stdio.h>
int main()
{
    int n,p,a,r,r1,s=0,s1=0;
    scanf("%d",&n);
    a=n*n;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    p=s*s;
    while(p!=0)
    {
        r1=p%10;
        s1=s1*10+r1;
        p=p/10;
    }
    if(a==s1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}