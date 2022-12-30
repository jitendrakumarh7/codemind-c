#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,c=0,ct=-2,a,b;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            a=pow(3,c)+2;
            printf("%d ",a);
            c++;
        }
        else
        {
            printf("%d ",ct);
            b=5*ct+12;
            ct=b;
        }
    }
}