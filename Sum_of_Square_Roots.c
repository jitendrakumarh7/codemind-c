#include<stdio.h>
#include<math.h>
int main()
{
    int i,a,b;
    scanf("%d%d",&a,&b);
    float sum=0;
    for(i=a;i<=b;i++)
    {
        sum=sum+(float)sqrt(i);
    }
    printf("%0.2f",sum);
}