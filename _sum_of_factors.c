#include<stdio.h>
int main()
{
    int i,n,c=0;
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            c=c+i;
        }
    }
    printf("%d",c);
}