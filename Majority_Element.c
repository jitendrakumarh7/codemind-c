#include<stdio.h>
int main()
{
    int n,y,i,max=0,t,c=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(int j=0;j<n;j++)
    {
        c=0;
        for(i=0;i<n;i++)
        {
            if(x[j]==x[i])
            {
                c++;
            }
        }
       // printf("%d",c);
        if(max<c)
        {
            t=x[j];
            max=c;
        }
    }
  printf("%d",t);
}