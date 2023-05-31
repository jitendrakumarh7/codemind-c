#include<stdio.h>
int main()
{
    int k;
    scanf("%d",&k);
    for(int t=1;t<=k;t++)
    {
        int n,i,p,s,ct=0,q=0,a;
        scanf("%d%d",&n,&a);
        int x[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&x[i]);
        }
        for(i=0;i<n-1;i++)
        {
            s=x[i];
            for(int j=i+1;j<n;j++)
            {
                s=s+x[j];
               // printf("[%d]",s);
               if(s==a)
               {
                   q=1;
                  printf("%d %d
",i+1,j+1);
               }
            }
            if(q==1)
            {
                break;
            }
        }
        if(q==0)
        {
            printf("-1
");
        }
       
    }
    
}