#include<stdio.h>
int main()
{
    int n,i,temp=0,t,p=1;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    t=0;
    while(t!=n)
    {
        temp=x[t];
        p=1;
     for(i=0;i<n;i++)
     {
         if(x[i]!=temp)
         {
            p=p*x[i]; 
         }
     }
     printf("%d ",p);
     t++;
    }
}