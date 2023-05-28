#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(int j=0;j<n;j++)
    {
        if(x[j]==0||x[j]==1)
        {
            c=1;
        }
        else c=0;
    }
    if(c==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}