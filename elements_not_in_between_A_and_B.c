#include<stdio.h>
int main()
{
    int n,x[n],i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    int a,b;
    scanf("%d%d",&a,&b);
      for(i=0;i<n;i++)
    {
        
     if(x[i]<a||x[i]>b)
     {
         printf("%d ",x[i]);
         c++;
     }
    }
    if(c==0)
    {
        printf("-1");
    }
    
  
   
}