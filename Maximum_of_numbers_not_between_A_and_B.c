#include<stdio.h>
int main()
{
    int n,i,max=0,c=1;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        if(max<x[i])
        {
            max=x[i];
        }
    }
    int a,b;
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(x[i]>a&&x[i]<b)
        {
            if(max==x[i])
            {
                printf("-1");
                c=0;
                break;
            }
        }
    }
    if(c==1)
    {
        printf("%d",max);
    }
    
}