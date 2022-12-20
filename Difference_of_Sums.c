#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,s=0,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
        s=s+pow(i,2);
    }
printf("%d",(sum*sum)-s);
}