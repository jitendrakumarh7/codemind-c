#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if(a>b&&a<c||a>c&&a<b)
        {
            printf("%d
",a);
        }
         else if(b>a&&b<c||b>c&&b<a)
        {
            printf("%d
",b);
        }
        else 
        {
            printf("%d
",c);
        }
    }
}