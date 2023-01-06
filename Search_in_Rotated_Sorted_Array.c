#include<stdio.h>
int main()
{
    int i,n,c=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    int a;
    scanf("%d",&a);
     for(i=0;i<n;i++)
    {
     if(x[i]==a)
     {
         c++;
         printf("%d ",i);
     }
    }
    if(c==0)
    printf("-1");
    
}