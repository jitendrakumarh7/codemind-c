#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],str1[100];
    scanf("%[^
]s
",&str);
    scanf(" %[^
]s",&str1);
    int i,j,t;
    strcat(str,str1);
   // printf("%s",str);
    for(i=0;str[i]!=NULL;i++)
    {
      for(j=i+1;str[j]!=NULL;j++)
      {
        if(str[i]>str[j])
        {
            int t=str[i];
            str[i]=str[j];
            str[j]=t;
        }
      }  
    }
    printf("%s",str);
    
}