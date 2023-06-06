#include<stdio.h>
int main()
{
    int n,i,s=0,s1=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        if(x[i]%2!=0)
        {
            s=s+x[i];
        }
        else
        {
            s1=s1+x[i];
        }
    }
    if(s1>s)
    {
        printf("%d",s1-s);
    }
    else
    {
        printf("%d",s-s1);
    }
}