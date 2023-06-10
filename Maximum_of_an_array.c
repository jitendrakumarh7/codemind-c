#include<stdio.h>
int main()
{
    int n,i,max=-1;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
   
    for(i=0;i<n;i++)
    {
        if(x[i]>max)
        {
            max=x[i];
        }
    }
    
        printf("%d",max);
    
}