#include<stdio.h>
int fib(int n){
    int a=0,p=n;
    int b=1,c=0,ct=0;
    while(p--)
    {
        c=a+b;
        if(c==n)
        {
         ct=1;
         break;
        }
        
        a=b;
        b=c;
    }
    if(ct==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,f1,f2,d1,d2;
    scanf("%d",&n);
   for(int i=n+1;;i++)
   {
       if(fib(i))
       
       {
           f1=i;
           d1=i-n;
           break;
       }
   }
    for(int i=n-1;;i--)
   {
       if(fib(i))
       
       {
           f2=i;
           d2=n-i;
           break;
       }
   }
   if(d1>d2)
   {
       printf("%d",f2);
   }
    else if (d1==d2)
   {
       printf("%d %d",f2,f1);
   }
   else
   {
       printf("%d",f1);
   }
}