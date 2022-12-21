#include<stdio.h>
int main()
{
    int i,y;
    scanf("%d",&y);
    for(i=1;i<=y;i++)
    {
    int n,c=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i*i==n)
        {
            printf("True
");
            c++;
        }
    }
    if(c==0)
    {
        printf("False
");
    }
    }
}