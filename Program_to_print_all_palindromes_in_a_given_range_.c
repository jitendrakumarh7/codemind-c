#include<stdio.h>
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
int main()
{
   int a,b,i;
   scanf("%d%d",&a,&b);
   for(i=a;i<=b;i++)
   {
       if(pal(i))
       {
           printf("%d ",i);
       }
   }
}