#include<stdio.h>
int main()
{
    int a,b,c,d,i,p=0;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    for(i=a;i<=b;i++)
    {
        if(i%c==0&&i%d!=0)
        {
            p=p+i;
        }
    }
    printf("%d",p);
}