#include<stdio.h>
int main()
{
    int n,i,c=0,d=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        if(x[i]%2==0)
        {
            c++;
        }
        else
        {
            d++;
        }
    }
    printf("%d %d",c,d);
}