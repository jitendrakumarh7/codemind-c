#include<stdio.h>
int main()
{
    int n,x[n],i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        c=c+x[i];
    }
    printf("%d",c);
}