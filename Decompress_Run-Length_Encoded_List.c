#include<stdio.h>
int main()
{
       int n,i,max=0,c=0,f=0,val=0;
        scanf("%d",&n);
        int x[n],y[10];
        for(i=0;i<n;i++)
        {
            scanf("%d",&x[i]);
        }
        for(int j=0;j<n;j+=2)
        {
           val=x[j+1];
           f=x[j];
           for(int k=1;k<=f;k++)
          {
            printf("%d ",val);   
           }
        }
       
}