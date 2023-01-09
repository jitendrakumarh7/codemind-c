#include<stdio.h>
int main(){
    int i,j,x,y,s=0;
    scanf("%d%d",&x,&y);
    int n[x][y];
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            scanf("%d",&n[i][j]);
        }
    }
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            s=s+n[i][j];
        }
    }
    printf("%d",s);
}