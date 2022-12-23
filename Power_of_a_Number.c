#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,s=0;
    scanf("%d%d%d",&a,&b,&c);
    s=pow(a,b);
    printf("%d",s%c);
}