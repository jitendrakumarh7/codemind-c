#include<stdio.h>
int pal(int);
int prime(int);
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=n+1;;i++)
    {
        if(pal(i)&&prime(i))
        {
           printf("%d",i);
            break;
        }
    }
    
   
}
int pal(int n)
{
    int r,s=0,p;
    p=n;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(p==s)
    {
        return 1;
    }
    else
    {
        return 0;
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