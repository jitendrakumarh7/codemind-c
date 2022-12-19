#include<stdio.h>
int main()
{
    int n,x[n],i,c=0,a=0,avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
      for(i=0;i<n;i++)
    {
       a=a+x[i];
    }
    avg=(a/n);
      for(i=0;i<n;i++)
    {
        if(avg==x[i])
        {
            c++;
            printf("True");
            break;
        }
    }
    if(c==0)
    {
        printf("False");
    }
}