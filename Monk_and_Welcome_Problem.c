#include<stdio.h>
int main()
{
       int n,i;
        scanf("%d",&n);
        int x[n],y[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&x[i]);
        }
        for(i=0;i<n;i++)
        {
            scanf("%d",&y[i]);
        }
        for(int j=0;j<n;j++)
        {
          printf("%d ",x[j]+y[j]);
        }
       
}