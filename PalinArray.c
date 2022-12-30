#include<stdio.h>
int pal(int n)
{
    int r,p,s=0;
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
    else{
        return 0;
    }
}
int main()
{
    int n,i,ct=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
       if(pal(x[i]))
       {
           ct++;
       }
    }
    if(n==ct)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    
}