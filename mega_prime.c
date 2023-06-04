#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
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
   int n,r,s=0,i,p;
   scanf("%d",&n);
   if(prime(n))
   {
       int c=0,ct=0;
       while(n!=0)
       { 
           ct++;
           r=n%10;
           if(prime(r))
           {
               c++;
           }
           n=n/10;
       }
       if(c==ct)
       {
           printf("Mega Prime");
       }
       else
       {
           printf("Not Mega Prime");
       }
   }
   else
   {
       printf("Not Mega Prime");
   }
}