#include<stdio.h>
int prime(int);
int main()
{
    int j,y;
    scanf("%d",&y);
    for(j=1;j<=y;j++)
    {
    int i,n,v,v1,d,d1;
    scanf("%d",&n);
    for(i=n;;i++)
    {
        if(prime(i))
        {
            d=i-n;
            v=i;
            break;
        }
    }
    for(i=n;;i--)
    {
        if(prime(i))
        {
            d1=n-i;
            v1=i;
            break;
        }
    }
    if(d>d1)
    {
        printf("%d
",v1);
    }
    else if(d1>d)
    {
        printf("%d
",v);
    }
    else
    printf("%d
",v1);
    }
    
}
int prime(int n)
{
    int i,c=0;
   for(i=1;i<=n;i++)
   {
       if(n%i==0)
       {
           c++;
       }
   }
    if(c==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}