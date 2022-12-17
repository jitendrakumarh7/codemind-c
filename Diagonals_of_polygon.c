#include<stdio.h>
int main()
{
    int n,s;
    scanf("%d",&n);
    if(n>3)
    {
        printf("%d",n*(n-3)/2);
    }
    else
    {
        printf("0");
    }
}