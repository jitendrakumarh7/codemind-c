// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int u;
    float uc,bill,t;
    scanf("%d",&u);
    if(u<200)
    {
        uc=1.20;
    }
    else if(u>=200 && u<400)
    {
        uc=1.50;
    }
    else if(u>=400 && u<600)
    {
        uc=1.80;
    }
    else
    {
        uc=2.00;
    }
    bill=u*uc;
    if(bill>=400)
    {
    t=bill+bill*0.15;
    }
    
    else
    {
        t=bill+100;
    }
    printf("%0.2f",t);
}