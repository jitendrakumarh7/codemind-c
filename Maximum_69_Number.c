#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int t=n,r1,r2,s=0,s2=0,c=0,k=0;
    int a[100];
    while(t)
    {
        r1=t%10;
        a[k++]=r1;
        t=t/10;
    }
    for(int i=k-1;i>=0;i--)
    {
        if(c==0 && a[i]==6)
        {
            s=s*10+9;
            c=1;
        }
        else
        {
            s=s*10+a[i];
        }
    }
    printf("%d",s);
}