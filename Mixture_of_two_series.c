#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,c=0,ct=0,b,a;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            a=pow(2,c);
          printf("%d ",a);
          c++;
        }
        else
        {
            b=pow(3,ct);
            printf("%d ",b);
            ct++;
        }
    }
}