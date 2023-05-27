#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int min=a<b?a:b;
    while(min)
    {
        if(a%min==0&&b%min==0)
        {
            printf("%d",min);
            break;
        }
        min--;
    }
}