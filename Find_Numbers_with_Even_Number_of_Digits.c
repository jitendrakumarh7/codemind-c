#include<stdio.h>
int main()
{
    int n,i,c=0,j,ct=0,r;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
      while(x[i]!=0)
      {
          c++;
          r=x[i]%10;
          x[i]=x[i]/10;
      }
      if(c%2==0)
      {
          ct++;
      }
    }
    printf("%d",ct);
    
}