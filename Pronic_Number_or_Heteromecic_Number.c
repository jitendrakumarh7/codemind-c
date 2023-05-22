#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,c=0;
    scanf("%d",&n);
    for(int i=1;i<n/2;i++)
    {
        if(n%i==0)
        {
            r=n/i;
            if((r-i)==1||r-i==-1)
            {
                c=1;
                printf("YES");
                break;
            }
            
        }
    }
    if(c==0)
            {
                printf("NO");
            }
}    