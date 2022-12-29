#include<stdio.h>
#include<math.h>
int main()
{
    int j,y;
    scanf("%d",&y);
    for(j=1;j<=y;j++)
    {
    int n,a,b,k,p,c=0,r;
    scanf("%d",&n);
    p=n;
    while(p!=0)
    {
        c++;
        r=p%10;
        p=p/10;
    }
    a=n%10;
    k=pow(10,(c-1));
    b=n/k;
    printf("%d
",a+b);
    }
}