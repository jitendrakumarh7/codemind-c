#include<stdio.h>
int main()
{
    int n,i,j,c,max=-1;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        if(max<x[i])
        {
            max=x[i];
        }
    }
    printf("%d",max);


}