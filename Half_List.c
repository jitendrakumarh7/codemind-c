#include<stdio.h>
int main()
{
    int n,k=0,i;
    scanf("%d",&n);
    int x[n],y[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=n-1;i>=n/2;i--)
    {
        y[k++]=x[i];
    }
    for(i=0;i<=n/2;i++)
    {
        y[k++]=x[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",y[i]);
    }
    
}