#include<stdio.h>
int main()
{
    int n,i,a=0,b=0;
    scanf("%d",&n);
    for(i=1;i<=n+1;i++)
    {
        if(i%2!=0)
        {
            a=a*2+1;
            printf("%d ",a);
        }
        else if(i%2==0)
        {
            b=b*3+2;
            printf("%d ",b);
        }
    }
    
}