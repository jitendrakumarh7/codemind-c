#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],c=0;
    scanf("%[^
]s",str);
    int i;
     for(i=0;str[i]!=NULL;i++)
    {
        if(c<str[i])
        {
            c=str[i];
        }
    }
    printf("%c",c);
}