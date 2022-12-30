#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int y;
        scanf("%d",&y);
        if(y>30)
        {
            printf("YES
");
        }
        else
        {
            printf("NO
");
        }
    }
}