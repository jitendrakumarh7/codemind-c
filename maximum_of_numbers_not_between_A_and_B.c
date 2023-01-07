#include<stdio.h>
int main()
{
    int n,i,max=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    int a,b,c=0;
    scanf("%d%d",&a,&b);
     for(i=0;i<n;i++)
    {
       if(a>x[i]||b<x[i])
       {
           if(max<x[i])
           {
               c++;
               max=x[i];
           }
       }
    }
    if(max>0)
    {
        printf("%d",max);
    }
    else
    {
        printf("-1");
    }
    
}