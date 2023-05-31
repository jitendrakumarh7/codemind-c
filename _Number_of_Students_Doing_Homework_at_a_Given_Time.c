#include<stdio.h>
int main()
{
    int n,A,i,c=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    scanf("%d",&A);
    int y[A];
    for(i=0;i<A;i++)
    {
        scanf("%d",&y[i]);
    }
    int num;
    scanf("%d",&num);
    for(int j=0;j<n;j++)
    {
        if(y[j]>=num&&x[j]<=num)
        {
            c++;
        }
    }
    printf("%d",c);
  
}