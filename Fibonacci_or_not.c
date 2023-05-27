#include<stdio.h>
int fib(int k)
{
    int n,a=0,b=1,c=0,ct=0;
    n=k;
    while(n)
    {
     if(a==k)
     {
         ct=1;
         return 1;
     }
     c=a+b;
     a=b;
     b=c;
     n--;
    }
    if(ct==0)
    {
        return 0;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int t=fib(n);
    if(t==1)
    {
        printf("True");
    
    }
    else
{
    printf("False");
}
    
}