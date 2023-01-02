#include<stdio.h>
int main()
{
    int n,i,c=0,ct=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0&&x[i]%2==0)
        {
            c++;
        }
        else if(i%2!=0&&x[i]%2==0)
        {
            ct++;
        }
    }
    if(ct==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}