#include<stdio.h>
int main()
{
    int n,r,c=0;
    scanf("%d",&n);
    int x[10]={0};
    while(n)
    {
        r=n%10;
            x[r]=x[r]+1;
            n=n/10;
    if(x[r]==2)
    {
        c=1;
         printf("Not Unique Number");
         break;
    }
    }
    if(c==0)
    {
         printf("Unique Number");
    }
}