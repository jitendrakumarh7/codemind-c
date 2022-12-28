#include<stdio.h>
int main()
{
    long long int n;
    int a,r,s=0,b;
    scanf("%lld",&n);
    a=n%1000;
     b=n-a;
   while(a!=0)
   {
       r=a%10;
       s=s*10+r;
       a=a/10;
   }
   n=b+s;
   printf("%lld",n);
    
}