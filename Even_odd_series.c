#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,c=-1,a,ct=1,b;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            a=pow(2,ct);
            printf("%d ",a);
            ct++;
        }
        else if(i%2!=0)
        {
            if(c==-1)
            {
                printf("0 ");
                c++;
            }
            else
            {
                b=pow(3,c);
                printf("%d ",b);
                c++;
            }
        }
    }
}