#include<stdio.h>
int main()
{
    int i,n,c=0,a;
    scanf("%d%d",&a,&n);
    for(i=a;i<=n;i++)
    {
        if(i%3==0&&i%2==0)
        {
            c++;
        }
    }
    printf("%d",c);
    
}