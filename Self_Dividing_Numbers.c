#include<stdio.h>
int main()
{
    int a,b,i,p,r,c,t;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        p=i;
        c=0;
        t=0;
        while(p!=0)
        {
            c++;
            r=p%10;
            if(r!=0&&i%r==0)
            {
                t++;
            }
            p=p/10;
            
        }
        if(t==c)
        {
            printf("%d ",i);
        }
    }
}