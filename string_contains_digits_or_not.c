#include<stdio.h>
int main()
    {
        int j,n;
        scanf("%d
",&n);
        for(j=1;j<=n;j++)
        {
        char str[100];
        scanf("%s",str);
        int i,c=0;
        for(i=0;str[i]!=NULL;i++)
        {
            if(str[i]>=48&&str[i]<=57||
            str[i]>=0&&str[i]<=9)
            {
                c=1;
                printf("Yes
");
                break;
            }
        }
        if(c==0)
        {
            printf("No
");
        }
        
    }
}