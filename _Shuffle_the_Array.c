#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    int y;
    scanf("%d",&y);
    i=0;
    while(y<n)
    {
        printf("%d %d ",x[i++],x[y++]);
    }
}