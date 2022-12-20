#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,s=0,p=1;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        p=p*r;
        s=s+r;
        n=n/10;
    }
    printf("%d",p-s);
}