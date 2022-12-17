#include<stdio.h>
int main()
{
    int n,r;
    scanf("%d",&n);
    r=n%100;
    if(r<9)
    {
        printf("0%d",r);
    }
    else
    {
        printf("%d",r);
    }
}