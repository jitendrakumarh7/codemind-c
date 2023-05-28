#include<stdio.h>
#include<math.h>
int main()
{
    int n,p,r,s=1,c=0,sum=0;
    scanf("%d",&n);
    int q=n;
    while(q)
    {
        c++;
        r=q%10;
        q=q/10;
    }
    p=n;
    while(p)
    {
        r=p%10;
        s=1;
        for(int i=1;i<=c;i++)
        {
            s=s*r;
        }
        sum=sum+s;
        p=p/10;
        c--;
    }
    
    if(sum==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}