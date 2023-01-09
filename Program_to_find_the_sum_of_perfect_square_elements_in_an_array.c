#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,a,s=0,su=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
      a=x[i];
      s=sqrt(a);
      
      if(a==(s*s))
      {
         su=su+a;
      }
      
     }
     printf("%d",su);
     
}