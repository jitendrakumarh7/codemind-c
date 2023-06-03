#include<stdio.h>
int main()
{
    int n,i,t=0,c=1,lst=0,fr=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    int vl;
    scanf("%d",&vl);
    for(i=0;i<n;i++)
   {
       if(x[i]==vl)
       {
           t++;
           if(c==1)
           {
               fr=i;
               c++;
           }
           lst=i;
       }
   }
   if(t>=1)
   {
       printf("%d %d ",fr,lst);
   }
  else
  {
      printf("-1 -1 ");
  }
}