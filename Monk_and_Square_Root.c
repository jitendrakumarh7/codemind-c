#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,f=0;
        scanf("%d%d",&n,&m);
        long x,i;
        for(i=0;i<m;i++)
        {
            x=i*i;
            if(x%m==n)
            {
                printf("%ld
",i);
                f=1;
                break;
            }
        }
        if(f==0)
        {
            printf("-1
");
        }
    }
}