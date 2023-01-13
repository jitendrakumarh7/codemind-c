#include<stdio.h>
int main()
{
    char str[1000];
    int i,c=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>=48&&str[i]<=57)
        {
            c++;
            //  printf("%c",str[i]);
        }
    }
    if(c==0)
    {
        printf("Doesn't contain digit");
    }
    else printf("Contains %d digit",c);
    
}