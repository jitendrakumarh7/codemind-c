#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    int y,c=0;
    scanf("%d",&y);
    for(int j=0;j<n;j++)
    {
       if(y==x[j])
       {
           c=1;
           printf("True");
           break;
       }
    }
    if(c==0)
    {
        printf("False");
    }
}