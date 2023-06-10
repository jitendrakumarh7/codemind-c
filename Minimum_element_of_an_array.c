#include<stdio.h>
int main()
{
    int n,i,min=999;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        if(min>x[i])
        {
            min=x[i];
        }
    }
        printf("%d",min);
}