#include<stdio.h>
int main()
{
        int n,a,i;
        scanf("%d",&n);
        int x[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&x[i]);
        }
        scanf("%d",&a);
        for(int f=1;f<=a;f++)
        {
            int p=x[n-1];
            for(int j=n-1;j>=1;j--)
            {
                x[j]=x[j-1];
            }
            x[0]=p;
        }
        for(i=0;i<n;i++)
        {
            printf("%d ",x[i]);
        }
}