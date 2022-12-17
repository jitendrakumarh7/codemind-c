#include<stdio.h>
int main()
{
    int h,m,s,r,n;
    scanf("%d",&n);
    h=n/3600;
    n=n%3600;
    m=n/60;
    n=n%60;
    printf("H:M:S-%d:%d:%d",h,m,n);
    
    
}