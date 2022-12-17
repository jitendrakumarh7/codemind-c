#include<stdio.h>
int main()
{
    int i,n,p=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        p=p+i;
    }
    printf("%d",p);
}