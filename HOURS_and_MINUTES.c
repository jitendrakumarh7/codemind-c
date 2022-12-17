#include<stdio.h>
int main()
{
    int n,h;
    scanf("%d",&n);
    h=n/60;
    n=n%60;
    printf("%d Hour(s) %d Minute(s)",h,n);
}