// Online C compiler to run C program online
#include<stdio.h>

int main() 
{
    int n,i,j,t=0;
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
        if(x[i]>x[j])
        {
            t=x[i];
            x[i]=x[j];
            x[j]=t;
            
        }
            
           }
        
        
    }
     for(i=0;i<n;i++)
    {
       printf("%d ",x[i]); 
    }
  
}