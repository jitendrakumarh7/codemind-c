#include<stdio.h>
int main()
{
    int n,i,s=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
   int a,b,c=0;
   scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(x[i]<a||x[i]>b)
        {
            c=1;
             printf("%d ",x[i]);
        }
    }
    if(c==0)
    {
        printf("-1");
    }
       
    
}