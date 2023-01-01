#include<stdio.h>
int main()
{
    int n,i,c=0,j;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d ",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
      {
          if(x[j]<x[i])
          {
              c++;
          }
      }
      printf("%d ",c);
    }
    
}