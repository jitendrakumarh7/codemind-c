#include<stdio.h>
int main()
{
    int i,n,temp=0,j;
    scanf("%d",&n);
      int x[n];
     for(i=0;i<n;i++)
     {
       scanf("%d",&x[i]);
     }
     for(i=0;i<n;i++)
     {
         for(j=i+1;j<n;j++)
       {
            if(x[i]==0)
            {
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
       }
     }
   for(i=0;i<n;i++)
     {
      printf("%d ",x[i]);
     }
     
    
}