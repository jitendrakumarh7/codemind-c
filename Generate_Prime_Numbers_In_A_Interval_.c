#include<stdio.h>
int main()
{
    int i,j,a,b,c;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        int c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            printf("%d
",i);
        }
    }
}