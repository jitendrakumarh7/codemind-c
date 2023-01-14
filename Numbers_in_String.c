#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],str1[100];
    scanf("%[^
]s",str);
    int i,c=0;
     for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>='0'&&str[i]<='9')
        {
            c=c+str[i]-'0';
        }
    }
    printf("%d",c);
}