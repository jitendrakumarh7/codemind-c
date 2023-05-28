#include<stdio.h>
int main()
{
    int n,c=0,i,ans=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(int j=1;j<=50;j++)
    {
        int c=0;
        for(i=0;i<n;i++)
        {
            if(x[i]%j==0)
            {
                c++;
            }
        }
        if(c==n)
        {
            ans=j;
        }
    }
    printf("%d",ans);
}