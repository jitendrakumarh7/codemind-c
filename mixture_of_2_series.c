#include<stdio.h>
int main()
{
    int n,i,c=0,ct=0,a,b;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            a=2*ct;
            printf("%d ",a);
            ct++;
        }
        else
        {
            printf("%d ",c);
            c++;
        }
    }
}