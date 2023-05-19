#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,max=0;
    scanf("%d %d",&a,&b);
    max=a>b?a:b;
    while(max)
    {
        if(max%a==0&&max%b==0)
        {
            printf("%d",max);
            break;
        }
   max++;
    }
}