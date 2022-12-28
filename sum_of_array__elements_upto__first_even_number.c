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
      if(x[i]%2!=0)
      {
          c=c+x[i];
      }
      else
      {
          break;
      }
    }
    printf("%d",c);
    
}