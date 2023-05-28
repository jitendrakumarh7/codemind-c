#include<stdio.h>
int main()
{
    int n,k=0,i,j,c=0,ct=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(j=0;j<n;j++)
    {
        c=0;
        for(i=j+1;i<n;i++)
        {
            c++;
            ct=0;
           if(x[j]<x[i])
           {
               ct=1;
               break;
           }
           
        }
        if(ct==0)
        {
            printf("0 ");
        }
        else
        printf("%d ",c);
    }
}