#include<stdio.h>
int main()
{
    int r,n,s=0,p=1;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        p=p*r;
        s=s+r;
        n=n/10;
    }
    if(p==s)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}