#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    for(int i=1;i<n/4;i++)
    {
        if(i*i==n)
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