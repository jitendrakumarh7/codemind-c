#include<stdio.h>
int main()
{
    int a,b,i,j,s=0;
    scanf("%d%d",&a,&b);
    int x[a][b];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
           if(i==0||j==0||i==a-1||j==b-1)
           {
               s=s+x[i][j];
           }
        }
    }
    printf("%d",s);
}