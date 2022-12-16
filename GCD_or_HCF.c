#include<stdio.h>
int main()
{
    int a,b,min,i;
    scanf("%d%d",&a,&b);
    min=a<b?a:b;
   
    for(i=min;;i--)
    {
        if(a%i==0&&b%i==0)
        {
            printf("%d",i);
            break;
        }
    }
}