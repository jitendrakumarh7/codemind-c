#include<stdio.h>
int main()
{
    int i,n,j,c=0,temp=0,max=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
        for(i=0;i<n;i++)
    {
            c=0;
       for(j=0;j<n;j++)
      {
       if(x[i]==x[j])
       {
           c++;
       }

      }
  if(c>temp)
  {
      max=x[i];
      temp=c;
  }
            if(c==temp)
            {
                if(max>=x[i])
                {
                    max=x[i];
                }
            }
    
}
    printf("%d",max);
}