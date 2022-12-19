#include<stdio.h>
int main()
{
    int n,x[n],i;
    scanf("%d",&n);
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
             c=c+x[i];
        }
    }
    printf("%d",c);

}