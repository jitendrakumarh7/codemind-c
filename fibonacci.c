#include<stdio.h>
int main()
{
    int n,a=0,b=1,c=0;
    scanf("%d",&n);
    while(n)
    {
     printf("%d ",a);
     c=a+b;
     a=b;
     b=c;
     n--;
    }
}