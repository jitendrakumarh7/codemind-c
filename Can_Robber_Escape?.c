#include<stdio.h>
int main()
{
    int n,x[n],i,c=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=1;i<n;i++)
    {
        if(n<=x[i])
        {
            c++;
            printf("NO");
            break;
        }
    }
    if(c==0)
    {
        printf("YES");
    }
    
}