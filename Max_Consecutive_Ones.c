#include<stdio.h>
int main()
{
       int n,i,max=0,c=0;
        scanf("%d",&n);
        int x[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&x[i]);
        }
        for(int j=0;j<n;j++)
        {
            if(x[j]==1)
            {
                c++;
                //printf("(%d)",c);
            }
            else 
            {
                if(max<c)
                {
                max=c;
                c=0;
                }
            }
            
        }
        if(max<c)
            {
                max=c;
            }
        printf("%d",max);
}