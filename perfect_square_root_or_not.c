#include<stdio.h>
int main()
{
    int n,c=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i*i==n)
        {
            printf("True");
            c++;
        }
    }
    if(c==0)
    {
        printf("False");
    }
}