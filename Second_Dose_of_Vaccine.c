#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b&&a<=c)
    {
        printf("Take second dose now
");
    }
    else if(a<b)
    {
        printf("Too Early
");
    }
    else
    {
        printf("Too Late
");
    }
    }
}