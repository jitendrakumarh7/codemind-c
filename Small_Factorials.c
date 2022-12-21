#include<stdio.h>
int main()
{
    int i,y;
    scanf("%d",&y);
    for(i=1;i<=y;i++)
    {
    int i,n,c=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      c=c*i;
    }
    printf("%d
",c);
    }
}